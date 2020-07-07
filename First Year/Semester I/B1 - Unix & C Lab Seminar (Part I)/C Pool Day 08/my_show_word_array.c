/*
** EPITECH PROJECT, 2020
** my_show_word_array.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>

int my_show_word_array(char * const *tab)
{
    for (size_t i = 0; tab[i] != NULL; i++)
        for(size_t j = 0; tab[i][j]; j++) {
            my_putstr(tab[i]);
            my_putchar('\n');
        }
    return 0;
}