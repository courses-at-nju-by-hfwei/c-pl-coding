//
// Created by hengxin on 7/13/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

int main() {
    const int LEFT = 0;
    const int TOP = 0;
    const int RIGHT = 20;
    const int BOTTOM = 20;

    int x = 0;
    int y = 0;

    int vx = 1;
    int vy = 1;

    while (true) {
        x = x + vx;
        y = y + vy;

        system("clear");

        for (int i = 0; i < x; i++) {
            printf("\n");
        }
        for (int i = 0; i < y; i++) {
            printf(" ");
        }
        printf("o\n");
        sleep(1);

        if (x == TOP || x == BOTTOM) {
            vx = - vx;
            printf("\a");
        }
        if (y == LEFT || y == RIGHT) {
            vy = -vy;
            printf("\a");
        }
    }
}

