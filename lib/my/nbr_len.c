/*
** EPITECH PROJECT, 2019
** nbr_len
** File description:
** count a numer len
*/

//#include "../include/my.h"
#include <stdio.h>

int nbr_len(int nb)
{
    int count = 1;

    for (count = 1; nb > 9; count++)
        nb /= 10;
    return (count);
}
