/*
** EPITECH PROJECT, 2019
** requi
** File description:
** ment
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int my_compute_square_root(int nb)
{
    float res = 1;
    int count = 0;

    if (nb < 0)
        return (0);
    if (nb == 0)
        return (0);
    if (nb == 1)
        return (1);
    for (; res < nb; count++)
        res = count * count;
    if (res == nb)
        return (count - 1);
    return (0);
}
