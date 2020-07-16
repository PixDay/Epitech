/*
** EPITECH PROJECT, 2020
** my_strcpy.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>

char *my_strcpy(char *dest, char const *src)
{
    size_t index = 0;

    while (src[index] != '\0') {
        dest[index] = src[index];
        index++;
    }
    dest[index] = '\0';
    return dest;
}