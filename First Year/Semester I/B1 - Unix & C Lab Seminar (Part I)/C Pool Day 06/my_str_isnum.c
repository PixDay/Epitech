/*
** EPITECH PROJECT, 2020
** my_str_isnum.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>

int my_str_isnum(char const *str)
{
    size_t i = 0;

    if (str[0] == '\0')
        return 1;
    if (str[0] == '-' || str[0] == '+')
        i++;
    for (; str[i] != '\0'; i++)
        if (str[i] < '0' || str[i] > '9')
            return 1;
    return 0;
}