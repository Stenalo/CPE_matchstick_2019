/*
** EPITECH PROJECT, 2019
** my_rev_getnbr
** File description:
** to pass a int into a char *
*/

#include <stdlib.h>

char *my_rev_getnbr(int nb)
{
    char *str;
    int i = 0;
    int div = 1;
    long cnt = nb;

    if (nb < 0) {
        cnt *= -1;
        nb *= -1;
    }
    for (; cnt > 9; cnt /= 10, div *= 10, i++);
    str = malloc(sizeof(char) * (i + 1));
    if (str == NULL)
        return (NULL);
    for (int j = 0, count = 0, cpy = nb; div > 0; div /= 10, count++) {
        j = cpy / div;
        str[count] = j + '0';
        cpy = cpy % div;
    }
    str[i + 1] = '\0';
    return (str);
}
