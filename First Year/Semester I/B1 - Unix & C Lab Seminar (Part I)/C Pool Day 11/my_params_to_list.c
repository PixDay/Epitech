/*
** EPITECH PROJECT, 2020
** my_params_to_list.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>
#include "include/mylist.h"

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    linked_list_t *first = malloc(sizeof(linked_list_t));
    linked_list_t *tmp = first;

    for(size_t i = 0; i < ac; i++) {
        tmp->data = av[i];
        tmp->next = malloc(sizeof(linked_list_t));
        if (tmp->next == NULL)
            return NULL;
        tmp = tmp->next;
    }
    return first;
}