/*
** EPITECH PROJECT, 2019
** is_char_digit
** File description:
** to know if a char is a digit
*/

int is_char_digit(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}
