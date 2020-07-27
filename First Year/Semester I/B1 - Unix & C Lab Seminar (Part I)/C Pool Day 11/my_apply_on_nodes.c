/*
** EPITECH PROJECT, 2020
** my_apply_on_nodes.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>
#include "include/mylist.h"

int my_list_size(linked_list_t const *begin);

int my_apply_on_nodes(linked_list_t *begin, int (*f)(void *))
{
    linked_list_t *tmp = begin;

    while (tmp->next != NULL) {
        f(tmp->data);
        tmp = tmp->next;
    }
    return 0;
}