/*
** EPITECH PROJECT, 2020
** draw
** File description:
** map
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../include/match.h"
#include "../include/my.h"

char **alloc_array(int nb)
{
    int nb_rows = 2 + nb;
    int nb_cols = 2 * nb + 1;
    char **array = malloc(sizeof(char *) * (nb_rows + 1));
    int i = 0;

    if (!array)
        return (NULL);
    for (i = 0; i < nb_rows; i++) {
        array[i] = malloc(sizeof(char) * nb_cols + 1);
        mem_set(array[i], 0, nb_cols + 1);
        if (!array[i])
            return (NULL);
    }
    array[i] = 0;
    return (array);
}

char **fill_array(int nb, char **array)
{
    int nb_rows = nb;
    int nb_cols = 2 * nb + 1;
    int i = 1;

    mem_set(array[0], '*', nb_cols);
    for (; i < nb_rows; i++)
        mem_set(array[i], '*', nb_cols);
    mem_set(array[i + 1], '*', nb_cols);
    return (array);
}

char **fill_space(int nb, char **array)
{
    int nb_rows = nb;
    int nb_cols = 2 * nb + 1;
    int i = 1;

    while (i <= nb_rows) {
        mem_set(array[i], ' ', nb_cols);
        array[i][0] = '*';
        array[i][nb_cols - 1] = '*';
        i++;
    }
    return (array);
}

char **fill_matches(int nb, char **array)
{
    int nb_cols = (2 * nb + 1) / 2;
    int left_match = 0;
    int right_match = 0;
    int i = 1;

    while (i <= nb) {
        array[i][nb_cols] = '|';
        for (int j = 0; j <= left_match; j++)
            array[i][nb_cols - j] = '|';
        for (int k = 0; k <= right_match; k++)
            array[i][nb_cols + k] = '|';
        left_match++;
        right_match++;
        i++;
    }
    return (array);
}

char **init_map(int nb)
{
    char **map = alloc_array(nb);

    fill_array(nb, map);
    fill_space(nb, map);
    fill_matches(nb, map);
    return (map);
}
