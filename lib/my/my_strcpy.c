/*
** EPITECH PROJECT, 2019
** my_strcpy
** File description:
** copy a string to another
*/

#include <unistd.h>
#include <stdio.h>

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    for (i = 0; src[i]; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}
