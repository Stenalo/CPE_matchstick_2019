/*
** EPITECH PROJECT, 2020
** print
** File description:
** map
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../include/match.h"
#include "../include/my.h"

void print_map(char **array)
{
    int i = 0;

    while (array[i]) {
        my_putstr(array[i]);
        my_putchar('\n');
        i++;
    }
}