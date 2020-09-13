/*
** EPITECH PROJECT, 2019
** my_str_isalpha
** File description:
** check if string is alphabetical
*/

#include <stdio.h>
#include "../../include/my.h"

int my_str_isalpha(char const *str)
{
    int i = 0;

    if (str[0] == '\0')
        return (1);
    for (i = 0; str[i] != '\0'; i++) {
        if (char_is_alpha(str[i]) == 0)
            return (0);
    }
    return (1);
}
