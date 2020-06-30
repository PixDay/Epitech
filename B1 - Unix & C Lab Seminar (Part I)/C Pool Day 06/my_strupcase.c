/*
** EPITECH PROJECT, 2020
** my_strupcase.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>

char *my_strupcase(char *str)
{
    for (size_t i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= ('a' - 'A');
    }
    return str;
}