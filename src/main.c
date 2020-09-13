/*
** EPITECH PROJECT, 2020
** main
** File description:
** function
*/

#include "../include/my.h"
#include <stddef.h>
#include <unistd.h>
#include "../include/match.h"

int main(int ac, char **av)
{
    if (ac != 3)
        return (84);
    return (matchstick(ac, av));
}
