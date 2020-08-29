/*
** EPITECH PROJECT, 2020
** my_sokoban_new
** File description:
** sokoban
*/

#ifndef SOKOBAN_H_
#define SOKOBAN_H_

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdarg.h>
#include <stdlib.h>
#include <ncurses.h>

typedef struct box_s
{
    int x;
    int y;
    struct box_s *next;
}box_t;

typedef struct goal_s
{
    int x;
    int y;
    struct goal_s *next;
}goal_t;

typedef struct list_s
{
    int nb_goal, nb_box, nb_line;
    int p_x, p_y;
    struct box_s *box;
    struct goal_s *goal;
}list_t;

//lib 
int	my_strcmp(char *s1, char *s2);
void my_putstr(char *str);
int my_puterror(char *str);

//src
int open_file(char *filepath);
int str_to_word_array(char *buffer);
void display_map(char **map);
void free_map(char **map);
int init_map(char **map, list_t *list);
int game_loop(char **map, list_t *list);
void player_move(int ch, list_t *list);
int stop_now(char **map);
list_t *push_back_list(list_t *li, int y, int x);
int create_list(char **map, int line, int goal);
void move_up(list_t *list);
void move_down(list_t *list);
void move_left(list_t *list);
void move_right(list_t *list);
int is_move_okay_box(int b_y, int b_x);
int is_move_okay_solo(int p_y, int p_x);
void init_object(list_t *list);

#endif /* !SOKOBAN_H_ */