/*
** EPITECH PROJECT, 2020
** my_str_isprintable.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>

int my_str_isprintable(char const *str)
{
    if (str[0] == '\0')
        return 1;
    for (size_t i = 0; str[i] != '\0'; i++)
        if (str[i] < ' ')
            return 0;
    return 1;
}