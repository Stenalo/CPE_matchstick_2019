/*
** EPITECH PROJECT, 2019
** my_strncmp
** File description:
** compare substrings
*/

#include <stdio.h>
#include <string.h>

int my_strlen(char const *str);

int my_strncmp(char const *s1, char const *s2, int n)
{
    if (n == 0)
        return (0);
    if (n > my_strlen(s1))
        return (99);
    while (n--) {
        if (*s1 != *s2)
            return (*s1 - *s2);
        if (*s1 == *s2)
            return (0);
        (s1)++;
        (s2)++;
    }
    return (*s1 - *s2);
}
