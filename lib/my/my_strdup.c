/*
** EPITECH PROJECT, 2019
** my_strdup
** File description:
** string malloc
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *my_strdup(char const *src)
{
    int i = 0;
    char *dest;

    for (; src[i]; i++);
    dest = malloc(sizeof(char) * (i + 1));
    if (!dest)
        return (NULL);
    if (src == NULL)
        return (0);
    i = 0;
    for (; src[i]; i++)
        dest[i] = src[i];
    return (dest);
}
