/*
** EPITECH PROJECT, 2020
** remove
** File description:
** matches
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../include/match.h"
#include "../include/my.h"
#include <stddef.h>

int check_remove(int line, int match, input_t *input, int *stick)
{
    int i = 0;

    for (i = 0; i != input->line - 1; i++) {
        if (stick[i - 1] != 0) {
            remove_matches(input->map, line, match, stick);
            return (0);
        }
        else
            i++;
    }
    return (-1);
}