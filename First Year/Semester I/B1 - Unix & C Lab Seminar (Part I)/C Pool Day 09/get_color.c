/*
** EPITECH PROJECT, 2020
** get_color.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>
#include "include/my.h"

int get_color(unsigned char red, unsigned char green, unsigned char blue)
{
    int res = red << 16;

    res += (green << 8);
    res += blue;
    return res;
}