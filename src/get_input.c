/*
** EPITECH PROJECT, 2020
** get
** File description:
** player input
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../include/match.h"
#include "../include/my.h"
#include <stddef.h>

char *get_input(void)
{
    size_t read = 10;
    char *buffer = malloc(sizeof(char) * read);

    if (!buffer || !read)
        return (NULL);
    if (getline(&buffer, &read, stdin) == -1)
        return (NULL);
    return (buffer);
}