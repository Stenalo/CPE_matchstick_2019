/*
** EPITECH PROJECT, 2019
** my_str_isprintable
** File description:
** check if str is only printale
*/

#include "../../include/my.h"

int my_str_isprintable(char const *str)
{
    int i = 0;

    if (str[0] == '\0')
        return (1);
    for (i = 0; str[i] != '\0'; i++) {
        if (char_is_printable(str[i]) == 0)
            return (0);
    }
    return (1);
}
