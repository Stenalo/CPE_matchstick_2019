/*
** EPITECH PROJECT, 2019
** my_itoa
** File description:
** convert a int to a string
*/

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "../../include/my.h"

char *my_itoa(int nb)
{
    int i = 0;
    int size = nbr_len(nb);
    char *str = malloc(sizeof(char) * (size));

    while (nb > 0) {
        str[i] = nb % 10 + '0';
        nb /= 10;
        i++;
    }
    str[i] = 0;
    str = my_revstr(str);
    return (str);
}

