/*
** EPITECH PROJECT, 2020
** my_add_in_sorted_list.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>
#include "include/mylist.h"

void my_add_in_sorted_list(linked_list_t **begin, void *data, int (*cmp)())
{
    linked_list_t *tmp = *begin;
    linked_list_t *new = malloc(sizeof(linked_list_t));
    linked_list_t *previous = NULL;

    while (tmp->next != NULL) {
        if (cmp(data, tmp->data) <= 0) {
            new->data = data;
            new->next = tmp;
            previous->next = new;
            break;
        }
        previous = tmp;
        tmp = tmp->next;
    }
}