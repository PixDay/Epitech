/*
** EPITECH PROJECT, 2020
** my_strcapitalize.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>
#define FALSE 0
#define TRUE 1

char *my_strlowcase(char *str)
{
    for (size_t i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += ('a' - 'A');
    }
    return str;
}

int isCharSeparator(char c)
{
    return ((c >= 'a' && c <= 'z') ||
            (c >= 'A' && c <= 'Z') ||
            (c >= '0' && c <= '9')) ? FALSE : TRUE;
}

char *my_strcapitalize(char *str)
{
    size_t boolean = TRUE;

    str = my_strlowcase(str);
    for (size_t i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') && boolean == TRUE)
            str[i] -= ('a' - 'A');
        boolean = isCharSeparator(str[i]);
    }
    return str;
}