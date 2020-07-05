/*
** EPITECH PROJECT, 2020
** my_getnbr_base.c
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

int getValue(char c, char const *base)
{
    int i = 0; 

    while (base[i] != '\0') {
        if (base[i] == c)
            return i;
        i++;
    }
    return -1;
}

int my_getnbr_base(char const *str, char const *base)
{
    int res = 0;
    size_t isNeg = (str[0] == '-') ? 1 : 0;
    size_t value = 0;
    size_t baseSize = my_strlen(base);

    for (size_t i = (isNeg) ? 1 : 0; str[i] != '\0'; i++) {
        value = getValue(str[i], base);
        res = res * baseSize;
        if (value == -1)
            return 0;
        res += (isNeg) ? -value : value;
    }
    return res;
}