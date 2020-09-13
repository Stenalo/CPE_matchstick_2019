/*
** EPITECH PROJECT, 2020
** header
** File description:
** matchstick
*/

#ifndef __MATCHSTICK_H__
#define __MATCHSTICK_H__

typedef struct input_s {
    int match;
    int line;
    char **map;
} input_t;

char **alloc_array(int nb);
char **init_map(int nb);
char **fill_matches(int nb, char **array);
char **fill_space(int nb, char **array);
char **fill_array(int nb, char **array);
void print_map(char **array);
int matchstick(int ac, char **av);
int print_turns(input_t *input, int *stick);
int check_player_input(char *in, input_t *input);
char **remove_matches(char **map, int line, int matches, int *stick);
int count_match_line(char **map, int line);
int is_line_empty(char **map, int line);
int check_remove(int line, int match, input_t *input, int *stick);
char *get_input(void);
void ai_turn(input_t *input, int *stick);
int check_match_input(char *in, input_t *input);
int check_player_error(int liner, char *in, input_t *input);
int check_line_input(char *in, input_t *input);
int game(input_t *input, int *stick);

#endif
