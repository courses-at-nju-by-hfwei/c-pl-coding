//
// Created by hengxin on 7/13/21.
//

#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include <ncurses.h>

int main() {
    int x = 5;
    int y = 10;

    char direction;

    while (true) {
        system("clear");

        for (int i = 0; i < x; i++) {
            printf("\n");
        }
        for (int i = 0; i < y; i++) {
            printf(" ");
        }
        printf(" * \n");

        // getchar() will buffer the input
        // Solution: use `getch()` in the `ncurses` library
        // which sends input immediately to stdin
        direction = getch();
        switch (direction) {
            case 'h':
                y--;
                break;
            case 'l':
                y++;
                break;
            case 'k':
                x--;
                break;
            case 'j':
                x++;
                break;
            default:
                break;
        }
        sleep(1);
    }
}