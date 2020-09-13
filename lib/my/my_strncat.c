/*
** EPITECH PROJECT, 2019
** my_strncat
** File description:
** concatenate strings for few characters
*/

#include <string.h>
#include <stdio.h>

int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int size = my_strlen(dest);
    int i = 0;

    for (i = 0; i < nb && src[i] != '\0'; i++)
        dest[size + i] = src[i];
    dest[size + i] = '\0';
    return (dest);
}
