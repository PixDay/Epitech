/*
** EPITECH PROJECT, 2020
** my_apply_on_nodes.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>
#include "include/mylist.h"

int my_apply_on_matching_nodes(linked_list_t *begin, int (*f)(), void const *data_ref, int (*cmp)())
{
    linked_list_t *tmp = begin;

    while (tmp->next != NULL) {
        if (cmp(tmp->data, data_ref))
            f(tmp->data);
        tmp = tmp->next;
    }
    return 0;
}