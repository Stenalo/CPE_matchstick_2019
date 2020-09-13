/*
** EPITECH PROJECT, 2019
** task06Day05
** File description:
** my_is_prime
*/

#include <stdio.h>

int my_is_prime(int nb)
{
    int i = 2;

    if (nb <= 1)
        return (0);
    for (; i < nb; i++) {
        if ((nb % i) == 0)
            return (0);
    }
    return (1);
}
