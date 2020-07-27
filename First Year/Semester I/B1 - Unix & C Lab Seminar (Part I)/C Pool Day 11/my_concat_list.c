/*
** EPITECH PROJECT, 2020
** my_concat_list.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>
#include "include/mylist.h"

void my_concat_list(linked_list_t **begin1, linked_list_t *begin2)
{
    linked_list_t *tmp = begin1[0];

    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = begin2;
}