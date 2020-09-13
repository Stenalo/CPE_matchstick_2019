/*
** EPITECH PROJECT, 2019
** is_reg_neg
** File description:
** to change an negativ string
*/

#include <stdlib.h>
#include "../../include/my.h"

char *is_res_neg(char *str)
{
    char *neg_str = malloc(sizeof(char) * my_strlen(str) + 2);

    if (neg_str == NULL)
        return (NULL);
    neg_str[0] = '-';
    my_strncat(neg_str, str, my_strlen(str));
    return (neg_str);
}
