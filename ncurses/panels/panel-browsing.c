//
// Created by hengxin on 7/17/21.
//

#include <panel.h>
#include <string.h>

#define NLINES 10
#define NCOLS 40

void init_wins(WINDOW **wins, int n);
void win_show(WINDOW *win, char *label, int label_color);
void print_in_middle(WINDOW *win, int starty, int startx, int width, char *string, chtype color);

int main() {
    WINDOW *my_wins[3];
    PANEL  *my_panels[3];

    initscr();
    start_color();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);

    init_pair(1, COLOR_RED, COLOR_BLACK);
    init_pair(2, COLOR_GREEN, COLOR_BLACK);
    init_pair(3, COLOR_BLUE, COLOR_BLACK);
    init_pair(4, COLOR_CYAN, COLOR_BLACK);

    init_wins(my_wins, 3);

    for (int i = 0; i < 3; i++) {
        my_panels[i] = new_panel(my_wins[i]);
    }

    for (int i = 0; i < 3; i++) {
        set_panel_userptr(my_panels[i], my_panels[(i+1) % 3]);
    }

    update_panels();

    attron(COLOR_PAIR(4));
    mvprintw(LINES - 2, 0, "Use tab to browse through the windows (F1 to Exit)");
    attroff(COLOR_PAIR(4));
    doupdate();

    int ch;
    PANEL *top = my_panels[2];
    while((ch = getch()) != KEY_F(1)) {
        switch(ch) {
            case 9:
                top = (PANEL *) panel_userptr(top);
                top_panel(top);
                break;
            default:
                break;
        }
        update_panels();
        doupdate();
    }
    endwin();
    return 0;
}

void init_wins(WINDOW **wins, int n) {
    int y = 2;
    int x = 10;
    char label[80];

    for(int i = 0; i < n; ++i) {
        wins[i] = newwin(NLINES, NCOLS, y, x);
        sprintf(label, "Window Number %d", i + 1);
        win_show(wins[i], label, i + 1);
        y += 3;
        x += 7;
    }
}

void win_show(WINDOW *win, char *label, int label_color) {
    int startx, starty, height, width;

    getbegyx(win, starty, startx);
    getmaxyx(win, height, width);

    box(win, 0, 0);
    mvwaddch(win, 2, 0, ACS_LTEE);
    mvwhline(win, 2, 1, ACS_HLINE, width - 2);
    mvwaddch(win, 2, width - 1, ACS_RTEE);

    print_in_middle(win, 1, 0, width, label, COLOR_PAIR(label_color));
}

void print_in_middle(WINDOW *win, int starty, int startx, int width, char *string, chtype color) {
    if(win == NULL)
        win = stdscr;

    int x, y;
    getyx(win, y, x);

    if(startx != 0)
        x = startx;
    if(starty != 0)
        y = starty;
    if(width == 0)
        width = 80;

    int length = (int) strlen(string);
    int temp = (width - length) / 2;
    x = startx + temp;
    wattron(win, color);
    mvwprintw(win, y, x, "%s", string);
    wattroff(win, color);
    refresh();
}