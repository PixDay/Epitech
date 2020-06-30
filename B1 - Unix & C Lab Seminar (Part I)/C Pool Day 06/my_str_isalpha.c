/*
** EPITECH PROJECT, 2020
** my_strlowcase.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>

int my_str_isalpha(char const *str)
{
    if (str[0] == '\0')
        return 1;
    for (size_t i = 0; str[i] != '\0'; i++)
        if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
            return 1;
    return 0;
}