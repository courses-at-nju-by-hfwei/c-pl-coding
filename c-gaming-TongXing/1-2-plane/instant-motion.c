//
// Created by hengxin on 7/13/21.
//

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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
        // getch() sends input immediately to stdin; however, it is not portable.
        // Possible solution: use `getch()` in the `ncurses` library
        direction = getchar();
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