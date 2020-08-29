/*
** EPITECH PROJECT, 2020
** my_sokoban_new
** File description:
** init_map
*/

#include "../include/sokoban.h"

int init_map(char **map, list_t *list)
{
    int max_y = 0, max_x = 1;
    initscr();
    noecho();
    getmaxyx(stdscr, max_y, max_x);
    keypad(stdscr, TRUE);
    if (max_y < list->nb_line || max_x < 1) {
        endwin();
        return (my_puterror("Terminal not wide enough\n"));
    }
    curs_set(0);
    return (game_loop(map, list));
}