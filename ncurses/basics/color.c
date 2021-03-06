//
// Created by hengxin on 7/15/21.
//

#include <ncurses.h>
#include <stdlib.h>
#include <string.h>

void print_in_middle(WINDOW *win, int starty, int startx, int width, char *string);

int main(int argc, char *argv[]) {
    initscr();

    if(has_colors() == FALSE) {
        endwin();
        printf("Your terminal does not support color.\n");
        exit(1);
    }

    start_color();
    init_pair(1, COLOR_RED, COLOR_BLACK);

    attron(COLOR_PAIR(1));
    print_in_middle(stdscr, LINES / 2, 0, 0, "Viola !!! In color ...");
    attroff(COLOR_PAIR(1));
    getch();
    endwin();
}

void print_in_middle(WINDOW *win, int starty, int startx, int width, char *string) {
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
    x = startx + (width - length) / 2;
    mvwprintw(win, y, x, "%s", string);
    refresh();
}