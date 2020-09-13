/*
** EPITECH PROJECT, 2019
** my_str_is_num_neg
** File description:
** check number positives and negative
*/

#include "../../include/my.h"

int char_is_num_neg(char c);

int my_str_is_num_neg(char const *str)
{
    int i = 0;

    if (str[0] == '\0')
        return (1);
    for (i = 0; str[i] != '\0'; i++) {
        if (char_is_num_neg(str[i]) == 0)
            return (0);
    }
    return (1);
}
