/*
** EPITECH PROJECT, 2019
** my_str_isnum
** File description:
** check if a string is composed of digits
*/

#include "../../include/my.h"

int my_str_isnum(char const *str)
{
    int i = 0;

    if (str[0] == '\0')
        return (1);
    for (i = 0; str[i] != '\0'; i++) {
        if (char_is_num(str[i]) == 0)
            return (0);
    }
    return (1);
}
