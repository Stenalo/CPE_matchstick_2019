/*
** EPITECH PROJECT, 2019
** display
** File description:
** string
*/

#include <unistd.h>
#include "../../include/my.h"

int my_putstr(char const *str)
{
    int i = 0;

    for (i = 0; str[i]; i++)
        my_putchar(str[i]);
    return (0);
}
