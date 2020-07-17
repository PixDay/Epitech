/*
** EPITECH PROJECT, 2020
** my_advanced_sort_word_array.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>

int my_advanced_sort_word_array(char **tab, int (*cmp)(char const *, char const *))
{
    char *tmp = NULL;

    for (size_t i = 1; tab[i] != NULL; i++) {
        if (cmp(tab[i], tab[i - 1]) > 0) {
            tmp = tab[i];
            tab[i] = tab[i - 1];
            tab[i - 1] = tmp;
            i -= 2;
        }
        i = (i < 1) ? 1 : i;
    }
    return 0;
}