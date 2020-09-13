/*
** EPITECH PROJECT, 2019
** my_strlowcase
** File description:
** puts every letter in lowercase
*/

#include <stdio.h>
#include "../../include/my.h"

int char_is_lower(char c);

char *my_strlowcase(char *str)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (char_is_upper(str[i]) == 1)
            str[i] = str[i] + ' ';
    }
    return (str);
}
