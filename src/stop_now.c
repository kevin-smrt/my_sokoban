/*
** EPITECH PROJECT, 2020
** my_sokoban_new
** File description:
** stop_now
*/

#include "../include/sokoban.h"

int stop_now(char **map)
{
    free_map(map);
    return (my_puterror("Invalid P/X/O\n\
Make sure box == goal and only one P\n"));
}