/*
** EPITECH PROJECT, 2020
** get
** File description:
** info line
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../include/match.h"
#include "../include/my.h"
#include <stddef.h>

int is_line_empty(char **map, int line)
{
    int i = 0;
    int not_empty = 0;

    for (i = 0; i != my_strlen(map[i]) - 1; i++) {
        if (map[line][i] == '|')
            not_empty = 1;
    }
    return (not_empty);
}

char **remove_matches(char **map, int line, int matches, int *stick)
{
    int last = my_strlen(map[line]) - 1;

    while (map[line][last] != '|')
        last--;
    for (int i = 0; i < matches; i++)
        map[line][last - i] = ' ';
    stick[line - 1] -= matches;
    return (map);
}

int count_match_line(char **map, int line)
{
    int i = 0;
    int count = 0;

    while (i != my_strlen(map[i])) {
        if (map[line][i] == '|')
            count++;
        i++;
    }
    return (count);
}