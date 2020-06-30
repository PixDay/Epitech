/*
** EPITECH PROJECT, 2020
** my_str_isnum.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>

int my_str_isnum(char const *str)
{
    if (str[0] == '\0')
        return 1;
    for (size_t i = 0; str[i] != '\0'; i++)
        if (str[i] < '0' || str[i] > '9')
            return 1;
    return 0;
}