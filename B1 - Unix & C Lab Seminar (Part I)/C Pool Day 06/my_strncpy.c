/*
** EPITECH PROJECT, 2020
** my_strncpy.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>

char *my_strncpy(char *dest, char const *src, int n)
{
    size_t index = 0;

    while (src[index] != '\0' && index < n) {
        dest[index] = src[index];
        index++;
    }
    if (index > 0 && src[index] == '\0')
        dest[index] = '\0';
    return dest;
}