/*
** EPITECH PROJECT, 2019
** convert base
** File description:
** function to convert a base
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../include/my.h"

char *convert_from_deci(char *str, int base, int nb)
{
    int i = 0;

    while (nb > 0) {
        if ((nb % base) >= 0 && (nb % base) <= 9)
            str[i] = ((nb % base) + '0');
        else
            str[i] = ((nb % base) - 10 + 'A');
        nb /= base;
        i++;
    }
    str[i] = '\0';
    my_revstr(str);
    return (str);
}

int convert_to_deci(char *str, int base)
{
    int size = my_strlen(str);
    int power = 1;
    int res = 0;
    int i = 0;

    for (i = size - 1; i >= 0; i--) {
        if (str[i] >= '0' && str[i] <= '9') {
            res = (str[i] - '0') * power;
        } else {
            res = ((str[i] - 'A') + 10) * power;
        }
        power *= base;
    }
    return (res);
}

char *convert_base(char const *nbr, char const *base_from, char const *base_to)
{
    char *str = my_strdup(nbr);
    int from_base = my_getnbr(base_from);
    int to_base = my_getnbr(base_to);
    char *res = malloc(sizeof(char) * 100);
    int convert_from = convert_to_deci(str, from_base);
    char *result = convert_from_deci(res, to_base, convert_from);

    if (!res)
        return (NULL);
    return (result);
}