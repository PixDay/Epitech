/*
** EPITECH PROJECT, 2020
** my_strdup.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    size_t len = my_strlen(src);
    char *dest = malloc((len * sizeof(char)) + 1);

    if (dest == NULL)
        return NULL;
    for (size_t i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[len] = '\0';
    return dest;
}