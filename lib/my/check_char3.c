/*
** EPITECH PROJECT, 2019
** check_char3
** File description:
** third tool functions
*/

#include "../../include/my.h"

int char_is_operator(char c)
{
    if (c == '-' || c == '+' || c == '*' || c == '%')
        return (1);
    return (0);
}

int char_is_operator_num(char c)
{
    if (char_is_num(c) || char_is_operator(c))
        return (1);
    return (0);
}

int char_is_parentheses(char c)
{
    if (c == '(' || c == ')')
        return (1);
    return (0);
}

int char_is_operator_num_par(char c)
{
    if (char_is_parentheses(c) || char_is_operator_num(c))
        return (1);
    return (0);
}