/*
** EPITECH PROJECT, 2019
** epi
** File description:
** tech
*/

#include<unistd.h>
#include <stdio.h>

int my_compute_power_rec(int nb, int p)
{
    int res = 1;

    if (p == 0 || nb == 1)
        return (1);
    if (p < 0 || nb == 0)
        return (0);
    if (p == 1)
        return (nb);
    if (p > 0)
        res = (nb * my_compute_power_rec(nb , p - 1));
    return (res);
}
