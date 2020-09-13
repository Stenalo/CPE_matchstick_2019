/*
** EPITECH PROJECT, 2019
** check_char
** File description:
** collection of functions to check the nature of a char
*/

int char_is_alpha(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    return (0);
}

int char_is_num(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

int char_is_printable(char c)
{
    if (c >= ' ' && c <= '~')
        return (1);
    return (0);
}

int char_is_upper(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    return (0);
}

int char_is_alpha_num(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || \
(c >= '0' && c <= '9'))
        return (1);
    return (0);
}
