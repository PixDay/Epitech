/*
** EPITECH PROJECT, 2020
** my_show_param_array.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>
#include "include/my.h"

int my_show_param_array(struct info_param const *par)
{
    for(size_t i = 0; par[i].str != NULL; i++) {
        my_putstr(par[i].str);
    }
    return 0;
}