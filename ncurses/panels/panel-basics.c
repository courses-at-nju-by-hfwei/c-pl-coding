//
// Created by hengxin on 7/17/21.
//

#include <panel.h>

int main() {
    const int LINES = 10;
    const int COLS = 40;

    int wins_y[3] = {2, 3, 4};
    int wins_x[3] = {4, 9, 14};
    WINDOW *my_wins[3];
    PANEL *my_panels[3];

    initscr();
    cbreak();
    noecho();

    for(int i = 0; i < 3; ++i) {
        my_wins[i] = newwin(LINES, COLS, wins_y[i], wins_x[i]);
        box(my_wins[i], 0, 0);
        my_panels[i] = new_panel(my_wins[i]);
    }

    update_panels();
    doupdate();

    getch();
    endwin();
}