/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** getnbr from a string
*/

#include <stdio.h>
#include "../../include/my.h"

int char_isnum(char c);

int check_digit(int res, char c)
{
    if (res > 2147483647 / 10)
        return (0);
    if (res == 2147483647 / 10 && c - '0' > 7)
        return (0);
    return (1);
}

int my_getnbr(char const *str)
{
    int res = 0;
    int neg = 1;
    int i = 0;

    for (; str[i] == '+' || str[i] == '-'; i++)
        if (str[i] == '-')
            neg *= -1;
    for (; str[i] == ' '; i++);
    for (; str[i] != '\0' && char_is_num(str[i]); i++) {
        if (check_digit(res, str[i]) == 0)
            return (0);
        res = res * 10 + str[i] - '0';
    }
    return (neg * res);
}
