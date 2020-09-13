/*
** EPITECH PROJECT, 2019
** find
** File description:
** function
*/

#include <stdio.h>
#include <unistd.h>

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    if (nb < 0)
        return (0);
    if (nb == 0)
        return (2);
    for (; !my_is_prime(nb); ++nb);
    return (nb);
}
