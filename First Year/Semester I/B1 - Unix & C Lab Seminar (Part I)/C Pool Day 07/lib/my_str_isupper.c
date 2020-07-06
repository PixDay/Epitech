/*
** EPITECH PROJECT, 2020
** my_str_isupper.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>

int my_str_isupper(char const *str)
{
    for (size_t i = 0; str[i] != '\0'; i++)
        if (str[i] < 'A' || str[i] > 'Z')
            return 0;
    return 1;
}