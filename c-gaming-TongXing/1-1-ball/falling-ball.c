//
// Created by hengxin on 7/12/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MAX_ROW 10

int main() {
    int row;
    int col = 10;

    for (row = 1; row < MAX_ROW; row++) {
        // Warning: it is not portable
        // Wins: using "cls"; Linux: using "clear"
        system("clear");

        for (int i = 0; i < row; i++) {
            printf("\n");
        }
        for (int i = 0; i < col; i++) {
            printf(" ");
        }

        printf("o\n");
        sleep(1);
    }

    return 0;
}
