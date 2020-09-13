/*
** EPITECH PROJECT, 2019
** my_strupcase
** File description:
** puts every letter in uppercase
*/

#include <stdio.h>
#include "../../include/my.h"

char *my_strupcase(char *str)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (char_is_lower(str[i]) == 1)
            str[i] = str[i] - ' ';
    }
    return (str);
}
