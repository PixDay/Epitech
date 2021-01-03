/*
** EPITECH PROJECT, 2020
** my_revstr.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>

int my_strlen(char const *str)
{
    int res = 0;

    while (str[res] != '\0')
        res++;
    return res;
}

char* my_revstr(char *str)
{
    char tmp;
    size_t len = my_strlen(str) - 1;

    for (size_t i = 0; i < len / 2; i++) {
        tmp = str[i];
        str[i] = str[len - i];
        str[len - i] = tmp;
    }
    return str;
}