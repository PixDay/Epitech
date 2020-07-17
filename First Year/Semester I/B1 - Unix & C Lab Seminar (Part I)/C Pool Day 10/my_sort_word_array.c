/*
** EPITECH PROJECT, 2020
** my_sort_word_array.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>

int shouldSwap(char const *s1, char const *s2)
{
    for(size_t i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
        if (s1[i] < s2[i])
            return 1;
    return 0;
}

int my_sort_word_array(char **tab)
{
    char *tmp = NULL;

    for (size_t i = 1; tab[i] != NULL; i++) {
        if (shouldSwap(tab[i], tab[i - 1])) {
            tmp = tab[i];
            tab[i] = tab[i - 1];
            tab[i - 1] = tmp;
            i -= 2;
        }
        i = (i < 1) ? 1 : i;
    }
    return 0;
}