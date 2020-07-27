/*
** EPITECH PROJECT, 2020
** my_list_size.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>
#include "include/mylist.h"

int my_list_size(linked_list_t const *begin)
{
    size_t res = 1;
    linked_list_t *tmp = begin;

    while (tmp->next != NULL)
        res++;
    return res;
}