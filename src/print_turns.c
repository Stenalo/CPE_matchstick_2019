/*
** EPITECH PROJECT, 2020
** print
** File description:
** turns
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../include/match.h"
#include "../include/my.h"
#include <stddef.h>

int check_player_error(int liner, char *in, input_t *input)
{
    if (my_str_isnum(in) == 0) {
        my_putstr("Error: invalid input (positive number expected)\n");
        return (-1);
    }
    if (in == NULL)
        return (-1);
    liner = my_getnbr(in);
    if (in == NULL)
        return (-1);
    if (liner <= 0 || liner > input->line) {
        my_putstr("Error: this line is out of range\n");
        return (-1);
    }
    return (0);
}

int check_match_input(char *in, input_t *input)
{
    int liner = 0;

    if (in == NULL)
        return (-1);
    in[my_strlen(in) - 1] = '\0';
    if (in == NULL)
        return (-1);
    liner = my_getnbr(in);
    if (liner > input->match) {
        my_putstr("Error: you cannot remove more than ");
        my_put_nbr(input->match);
        my_putstr(" match(es) per turn\n");
        return (-1);
    }
    if (check_player_error(liner, in, input) == -1)
        return (-1);
    return (0);
}

int check_line_input(char *in, input_t *input)
{
    int liner = 0;

    if (in == NULL)
        return (-1);
    in[my_strlen(in) - 1] = '\0';
    if (in == NULL)
        return (-1);
    if (check_player_error(liner, in, input) == -1)
        return (-1);
    if (in == NULL)
        return (-1);
    return (0);
}

void display_turn(char *match, char *mem)
{
    my_putstr("Player removed ");
    my_put_nbr(my_getnbr(match));
    my_putstr(" match(es) from line ");
    my_put_nbr(my_getnbr(mem));
    my_putchar('\n');
}

int print_turns(input_t *input, int *stick)
{
    char *mem = NULL;
    char *match = NULL;

    while (true) {
        my_putstr("Line: ");
        mem = get_input();
        if (mem == NULL)
            return (-1);
        if (check_line_input(mem, input) == -1)
            continue;
        my_putstr("Matches: ");
        match = get_input();
        if (match == NULL)
            return (-1);
        if (check_match_input(match, input) == -1)
            continue;
        if (check_remove(my_getnbr(mem), my_getnbr(match), input, stick) == 0)
            display_turn(match, mem);
        return (0);
    }
}
