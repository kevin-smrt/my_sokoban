/*
** EPITECH PROJECT, 2020
** my_sokoban_new
** File description:
** my_putstr
*/

#include "../include/sokoban.h"

void my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        write(1, &str[i], 1);
        i++;
    }
}