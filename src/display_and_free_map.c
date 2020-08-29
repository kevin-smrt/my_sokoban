/*
** EPITECH PROJECT, 2020
** my_sokoban_new
** File description:
** display_and_free_map
*/

#include "../include/sokoban.h"

void display_map(char **map)
{
    int i = 0, j = 0;

    for (; map[i] != NULL; i++) {
        for (j = 0; map[i][j] != '\0' || map[i][j] != '\0'; j++) {
            if (map[i][j] == '#')
                mvaddch(i, j, '#');
            else
                mvaddch(i, j, ' ');
        }
    }
}

void free_map(char **map)
{
    int i = 0;

    for (; map[i] != NULL; i++)
        free(map[i]);
    free(map);
}