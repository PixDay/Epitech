/*
** EPITECH PROJECT, 2020
** my_delete_nodes.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>
#include "include/mylist.h"

linked_list_t *my_delete_nodes(linked_list_t **begin, void const *data_ref, int (*cmp)())
{
    linked_list_t *tmp = begin[0];
    linked_list_t *previous = begin[0];
    
    while (tmp->next != NULL) {
        if (cmp(tmp->data, data_ref)) {
            tmp = tmp->next;
            free(previous->next);
            previous->next = tmp;
        }
        else
        {
            tmp = tmp->next;
            previous = previous->next;
        }
        
    }
    return NULL;
}