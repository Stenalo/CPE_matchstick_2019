/*
** EPITECH PROJECT, 2019
** string
** File description:
** size
*/

#include <unistd.h>
#include <stdio.h>

int my_strlen(char const *str)
{
    int count;

    for (count = 0; str[count]; count++);
    return (count);
}
