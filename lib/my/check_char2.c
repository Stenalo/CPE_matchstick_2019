/*
** EPITECH PROJECT, 2019
** check_char 2
** File description:
** second part of the collection of function that check char nature
*/

int char_is_num(char c);

int char_is_lower(char c)
{
    if ((c >= 'a' && c <= 'z'))
        return (1);
    return (0);
}

int char_is_num_neg(char c)
{
    if (c == '-' || char_is_num(c))
        return (1);
    return (0);
}
