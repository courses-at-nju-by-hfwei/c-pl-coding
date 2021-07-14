//
// Created by hengxin on 7/12/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int row = 0;
    int velocity = 1;

    const int MAX_COL = 10;
    const int HEIGHT = 10;

    while (1) {
        row = row + velocity;

        system("clear");

        for (int i = 0; i < row; i++) {
            printf("\n");
        }
        for (int i = 0; i < MAX_COL; i++) {
            printf(" ");
        }
        printf("o\n");
        sleep(1);

        if (row == HEIGHT || row == 0) {
            velocity = -velocity;
        }
    }
}
