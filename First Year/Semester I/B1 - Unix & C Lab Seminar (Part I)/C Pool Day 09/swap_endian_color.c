/*
** EPITECH PROJECT, 2020
** swap_endian_color.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>
#include "include/my.h"

int swap_endian_color(int color)
{
    unsigned int alpha = (color & 0xFF000000);
    unsigned int red = (color & 0x00FF0000);
    unsigned int green = (color & 0x0000FF00);
    unsigned int blue = (color & 0x000000FF);
    int res = ((alpha >> 24) & 0x000000FF);

    res += (red >> 8);
    res += (green << 8);
    res += (blue << 24);
    return 0;
}