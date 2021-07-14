//
// Created by hengxin on 7/14/21.
//

#include <ncurses.h>

int main() {
    initscr();
    printw("Hello World!");
    refresh();
    getch();
    endwin();

    return 0;
}

