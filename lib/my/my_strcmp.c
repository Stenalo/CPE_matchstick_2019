/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** compare strings
*/

#include <stdio.h>

int my_strcmp(char const *s1, char const *s2)
{
    while (*s1) {
        if (*s1 != *s2)
            return (*s1 - *s2);
        (s1)++;
        (s2)++;
    }
    return (*s1 - *s2);
}
