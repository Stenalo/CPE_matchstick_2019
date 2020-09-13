/*
** EPITECH PROJECT, 2019
** my_str_islower
** File description:
** check is a string is only lowercase
*/

#include "../../include/my.h"

int my_str_islower(char const *str)
{
    int i = 0;

    if (str[0] == '\0')
        return (1);
    for (i = 0; str[i] != '\0'; i++) {
        if (char_is_lower(str[i]) == 0)
            return (0);
    }
    return (1);
}
