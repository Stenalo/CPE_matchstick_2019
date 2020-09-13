/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** function
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../include/match.h"
#include "../include/my.h"

int is_empty_map(input_t *input, int *stick)
{
    int i = 0;

    for (i = 0; i != input->line; i++) {
        if (stick[i] != 0)
            return (1);
    }
    return (0);
}

int game(input_t *input, int *stick)
{
    print_map(input->map);
    while (true) {
        my_putstr("\nYour turn:\n");
        if (print_turns(input, stick) == -1)
            return (0);
        print_map(input->map);
        if (is_empty_map(input, stick) == 0) {
            my_putstr("You lost, too bad...\n");
            return (2);
        }
        ai_turn(input, stick);
        print_map(input->map);
        if (is_empty_map(input, stick) == 0) {
            my_putstr("I lost... snif... but I'll get you next time!!\n");
            return (1);
        }
    }
    return (0);
}

int *init_array_stick(int line)
{
    int *array = malloc(sizeof(int) * line);
    int i = 0;
    int j = 1;

    for (i = 0; i != line; i++, j++)
        array[i] = (2 * j) - 1;
    return (array);
}

input_t *init_input(char **av)
{
    input_t *input = malloc(sizeof(*input));

    if (!input)
        return (NULL);
    input->line = my_getnbr(av[1]);
    input->match = my_getnbr(av[2]);
    input->map = init_map(input->line);
    return (input);
}

int matchstick(int ac, char **av)
{
    input_t *input = init_input(av);
    int *stick = init_array_stick(my_getnbr(av[1]));

    if (!stick)
        return (84);
    if (input->line > 1 && input->line < 100 && input->match > 0)
        game(input, stick);
    free(stick);
    return (0);
}