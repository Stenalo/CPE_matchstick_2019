/*
** EPITECH PROJECT, 2019
** my_isneg
** File description:
** display neg
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../../include/my.h"

int my_isneg(int n)
{
    if (n < 0)
        my_putchar('N');
    if (n >= 0)
        my_putchar('P');
    return (n);
}
