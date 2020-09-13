/*
** EPITECH PROJECT, 2019
** epitech
** File description:
** header
*/

#include <unistd.h>
#include <stdio.h>

void my_swap(int *a, int *b)
{
    char i = 0;

    i = *a;
    *a = *b;
    *b = i;
}
