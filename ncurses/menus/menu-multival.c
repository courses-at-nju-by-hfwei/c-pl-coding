//
// Created by hengxin on 7/21/21.
// `gcc -o menu-multival menu-multival.c -lmenu -lncurses`
//

#include <curses.h>
#include <menu.h>
#include <stdlib.h>
#include <string.h>

#define ARRAY_SIZE(a) (sizeof(a) / sizeof(a[0]))

char *choices[] = {
    "Choice 1",
    "Choice 2",
    "Choice 3",
    "Choice 4",
    "Choice 5",
    "Choice 6",
    "Choice 7",
    "Exit",
};

int main() {
    ITEM **my_items;
    MENU *my_menu;
    ITEM *cur_item;

    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);

    int n_choices = ARRAY_SIZE(choices);
    my_items = (ITEM **) calloc(n_choices + 1, sizeof(ITEM *));
    for(int i = 0; i < n_choices; ++i)
        my_items[i] = new_item(choices[i], choices[i]);
    my_items[n_choices] = (ITEM *)NULL;

    my_menu = new_menu((ITEM **) my_items);
    menu_opts_off(my_menu, O_ONEVALUE);

    mvprintw(LINES - 3, 0, "Use <SPACE> to select or unselect an item.");
    mvprintw(LINES - 2, 0, "<ENTER> to see presently selected items (F1 to Exit)");
    post_menu(my_menu);
    refresh();

    int c;
    while((c = getch()) != KEY_F(1)) {
        switch(c) {
            case KEY_DOWN:
                menu_driver(my_menu, REQ_DOWN_ITEM);
                break;
            case KEY_UP:
                menu_driver(my_menu, REQ_UP_ITEM);
                break;
            case ' ':
                menu_driver(my_menu, REQ_TOGGLE_ITEM);
                break;
            case 10: {// "Enter"
                char temp[200];

                ITEM **items = menu_items(my_menu);
                temp[0] = '\0';
                for (int i = 0; i < item_count(my_menu); ++i) {
                    if (item_value(items[i]) == TRUE) {
                        strcat(temp, item_name(items[i]));
                        strcat(temp, " ");
                    }
                }
                move(20, 0);
                clrtoeol();
                mvprintw(20, 0, temp);
                refresh();
                break;
            }
            default:
                break;
        }
    }

    free_item(my_items[0]);
    free_item(my_items[1]);
    free_menu(my_menu);
    endwin();
}