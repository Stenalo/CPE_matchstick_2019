/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** concatenate two strings
*/

#include <stdio.h>

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int size = my_strlen(dest);
    int i = 0;

    for (i = 0; src[i] != '\0'; i++)
        dest[size + i] = src[i];
    dest[size + i] = '\0';
    return (dest);
}
