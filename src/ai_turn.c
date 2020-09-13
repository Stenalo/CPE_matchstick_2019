/*
** EPITECH PROJECT, 2020
** ai
** File description:
** turn
*/


#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include "../include/match.h"
#include "../include/my.h"
#include <stddef.h>

void ai_turn(input_t *input, int *stick)
{
    int i = 1;

    my_putstr("\nAI's turn...\n");
    while (stick[i - 1] == 0)
        i++;
    remove_matches(input->map, i, 1, stick);
    my_putstr("AI removed 1 match(es) from line ");
    my_put_nbr(i);
    my_putchar('\n');
}