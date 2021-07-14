//
// Created by hengxin on 7/14/21.
//

#include <ncurses.h>
#include <string.h>

int main() {
    const char msg[] = "Enter a string: ";
    char str[80];
    int row, col;

    initscr();
    getmaxyx(stdscr, row, col);
    mvprintw(row/2, (col - (int) strlen(msg)) / 2, "%s", msg);

    getstr(str);
    mvprintw(LINES - 2, 0, "You Entered: %s.\n", str);
    getch();
    endwin();

    return 0;
}

