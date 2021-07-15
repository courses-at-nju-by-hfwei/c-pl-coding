//
// Created by hengxin on 7/15/21.
//

/* pager functionality by Joseph Spainhour" <spainhou@bellsouth.net> */
#include <ncurses.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if(argc != 2) {
        printf("Usage: %s <a c file name>\n", argv[0]);
        exit(1);
    }

    FILE *fp = fopen(argv[1], "r");
    if(fp == NULL) {
        perror("Cannot open input file.\n");
        exit(1);
    }

    initscr();
    int row, col;
    getmaxyx(stdscr, row, col);

    int ch;
    int y, x;
    int prev = EOF;
    while((ch = fgetc(fp)) != EOF) {
        getyx(stdscr, y, x);

        if(y == row - 1) { // if at the end of the screen, then move to the beginning
            printw("<-Press Any Key->");
            getch();
            clear();
            move(0, 0);
        }

        if(prev == '/' && ch == '*') {
            attron(A_BOLD);
            getyx(stdscr, y, x);
            move(y, x - 1); // back up one space
            printw("%c%c", '/', ch);  /* print */
        } else {
            printw("%c", ch);
        }
        refresh();
        if(prev == '*' && ch == '/') {
            attroff(A_BOLD);
        }
        prev = ch;
    }
    endwin();
    fclose(fp);

    return 0;
}

