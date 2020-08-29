/*
** EPITECH PROJECT, 2020
** my_sokoban_new
** File description:
** main
*/

#include "../include/sokoban.h"

void usage(void)
{
    my_putstr("USAGE\n");
    my_putstr("\t./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("\tmap file representing the warehouse map, \
containing ‘#’ for walls, \n");
    my_putstr("\t\t‘P’ for the player, ‘X’ for boxes and ‘O’ \
for storage locations.\n");
}

int main(int argc, char **argv)
{
    if (argc != 2)
        return (my_puterror("Too much/invalid arg\n"));
    else if (argc == 2 && my_strcmp(argv[1], "-h") == 0)
        usage();
    else {
        return (open_file(argv[1]));
    }
    return (0);
}