/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** reverse a string
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int i = my_strlen(str) - 1;
    int j = 0;
    char c = 0;

    while (j < i) {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
        i--;
        j++;
    }
    return (str);
}
