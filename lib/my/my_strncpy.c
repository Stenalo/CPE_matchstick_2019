/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** copie n characters from a string to another
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i < n) {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}
