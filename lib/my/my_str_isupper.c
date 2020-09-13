/*
** EPITECH PROJECT, 2019
** my_str_isupper
** File description:
** check if a string is in uppercase
*/

int char_is_upper(char c);

int my_str_isupper(char const *str)
{
    int i = 0;

    if (str[0] == '\0')
        return (1);
    for (i = 0; str[i] != '\0'; i++) {
        if (char_is_upper(str[i]) == 0)
            return (0);
    }
    return (1);
}
