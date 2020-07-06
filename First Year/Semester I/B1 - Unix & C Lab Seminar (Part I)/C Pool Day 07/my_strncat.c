/*
** EPITECH PROJECT, 2020
** my_strncat.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>

char *my_strncat(char *dest, char const *src, int nb)
{
    size_t i = 0;

    while (dest[i] != '\0')
        i++;
    for (size_t j = 0; src[j] != '\0' && j < nb; j++) {
        dest[i + j] = src[j];
        dest[i + j + 1] = '\0';
    }
    return dest;
}