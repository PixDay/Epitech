/*
** EPITECH PROJECT, 2020
** my_find_node.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>
#include "include/mylist.h"

linked_list_t *my_find_node(linked_list_t const *begin, void const *data_ref, int (*cmp)())
{
    linked_list_t *tmp = begin;

    while (tmp->next != NULL) {
        if (cmp(tmp->data, data_ref))
            return tmp;
    }
    return NULL;
}