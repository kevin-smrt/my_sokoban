/*
** EPITECH PROJECT, 2020
** my_sokoban_new
** File description:
** game_loop
*/

#include "../include/sokoban.h"

void check_win(list_t *list, int *i)
{
    int result = 0;
    goal_t *temp_g = list->goal;
    box_t *temp_b = list->box;

    while (list->goal != NULL) {
        while (list->box != NULL) {
            if ((list->goal->x == list->box->x)
            && (list->goal->y == list->box->y)) {
                result += 1;
            }
            list->box = list->box->next;
        }
        list->box = temp_b;
        list->goal = list->goal->next;
    }
    list->goal = temp_g;
    list->box = temp_b;
    if (result == list->nb_goal)
        *i = result;
}

int game_loop(char **map, list_t *list)
{
    int i = 0, ch = 0;

    while (i != list->nb_goal) {
        clear();
        display_map(map);
        init_object(list);
        player_move(ch, list);
        check_win(list, &i);
        refresh();
    }
    endwin();
    free_map(map);
    return (0);
}