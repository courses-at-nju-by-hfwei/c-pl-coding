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
        
        scanf(" %c", &direction);   // ignore leading whitespaces
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

