/*
** EPITECH PROJECT, 2020
** my_rev_list.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>
#include "include/mylist.h"

int my_list_size(linked_list_t const *begin);

void my_rev_list(linked_list_t **begin)
{
    int elements = my_list_size(begin[0]);

    for (size_t i = 0; i < elements / 2; i++)
        begin[i] = begin[elements - i - 1];
    for (size_t i = 0; i < elements; i++)
        begin[i]->next = begin[i + 1];
    begin[elements - 1]->next = NULL;
}