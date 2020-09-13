/*
** EPITECH PROJECT, 2020
** fill a memory space
** File description:
** with a character
*/

void *mem_set(void *s, int c, int n)
{
    char *memory = (char *)s;
    int i = 0;

    while (i != n) {
        memory[i] = c;
        i++;
    }
    return (0);
}