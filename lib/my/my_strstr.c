/*
** EPITECH PROJECT, 2019
** my_strstr
** File description:
** locate a substring
*/

#include <stdio.h>
#include <string.h>

int my_strncmp(char const *s1, char const *s2, int n);

int my_strlen(char const *str);

char *my_strstr(char *str, char const *to_find)
{
    int size = my_strlen(to_find);

    if (to_find[0] == '\0')
        return (0);
    while (*str) {
        if (my_strncmp(str, to_find, size) == 0)
            return (str);
        str++;
    }
    return (0);
}
