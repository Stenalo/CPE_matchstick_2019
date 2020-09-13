/*
** EPITECH PROJECT, 2019
** my_strcapitalize
** File description:
** capitalize a character
*/

#include "../../include/my.h"

char *my_strcapitalize(char *str)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if ((char_is_alpha_num(str[i - 1]) == 0 && char_is_lower(str[i])))
            str[i] = str[i] - ' ';
        if (char_is_alpha_num(str[i - 1]) == 1 && char_is_upper(str[i]))
            str[i] = str[i] + ' ';
    }
    return (str);
}
