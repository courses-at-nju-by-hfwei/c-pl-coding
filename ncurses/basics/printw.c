//
// Created by hengxin on 7/14/21.
//

// ncurses.h includes stdio.h
#include <ncurses.h>
#include <string.h>

int main() {
    const char msg[] = "Just a string";
    int row, col;

    initscr();
    getmaxyx(stdscr, row, col);
    mvprintw(row/2, (col - (int) strlen(msg)) / 2, "%s", msg);
    mvprintw(row - 2, 0, "This screen has %d rows and %d columns\n", row, col);
    printw("Try resizing your window (if possible)"
               "and then run this program again.\n");
    refresh();
    getch();
    endwin();

    return 0;
}
