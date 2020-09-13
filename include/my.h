/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** My Epitech header
*/

#include <stdbool.h>
#ifndef __MY_H__
#define __MY_H__

void my_putchar(char c);
int my_isneg(int nb);
void *mem_set(void *s, int c, int n);
void redirect_all_std(void);
int char_is_operator(char c);
int char_is_operator_num(char c);
int char_is_num(char c);
int char_is_printable(char c);
int char_is_alpha_num(char c);
int char_is_upper(char c);
int char_is_lower(char c);
int char_is_alpha(char c);
char *my_strdup(char const *src);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int nbr_len(int nb);
int char_is_num_neg(char c);
int char_is_num_neg(char c);
int my_str_is_num_neg(char const *str);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int nb);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_show_word_array(char * const *tab);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str);
int char_is_num_neg(char c);
int my_str_is_num_neg(char const *str);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char my_putstr_error(char const *src);
int char_is_operator_num_par(char c);
int char_is_parentheses(char c);
int nbr_len(int nb);
char *my_itoa(int nb);
int is_char_digit(char c);
char *my_rev_getnbr(int nb);
char *is_res_neg(char *str);

#endif
