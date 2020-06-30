/*
** EPITECH PROJECT, 2020
** my_strlowcase.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>

char *my_strlowcase(char *str)
{
    for (size_t i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += ('a' - 'A');
    }
    return str;
}