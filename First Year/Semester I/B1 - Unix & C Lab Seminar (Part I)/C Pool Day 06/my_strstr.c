/*
** EPITECH PROJECT, 2020
** my_strstr.c
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

char *my_strstr(char *str, char const *to_find)
{
    size_t strIndex = 0;
    size_t findIndex = 0;
    int res = 0;

    for (size_t i = 0; str[strIndex] != '\0' && to_find[findIndex] != '\0';) {
        if (to_find[findIndex + 1] == '\0') {
            res = strIndex;
            break;
        }
        if (to_find[findIndex] != str[strIndex] && findIndex != 0) {
            strIndex--;
            findIndex = 0;
            res = -1;
        }
        if (to_find[findIndex] == str[strIndex]) {
            findIndex++;
        }
        strIndex++;
    }
    return (res == -1) ? NULL : &str[res - my_strlen(to_find) + 1];
}