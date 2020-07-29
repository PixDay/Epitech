/*
** EPITECH PROJECT, 2020
** my_sort_list.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>
#include "include/mylist.h"

void my_sort_list(linked_list_t **begin, int (*cmp)())
{
    int elements = my_list_size(begin[0]);
    linked_list_t *tmp = NULL;

    for (size_t i = 1; i < elements;) {
        if (cmp(begin[i]->data, begin[i - 1]->data) < 0) {
            tmp = begin[i];
            begin[i] = begin[i - 1];
            begin[i - 1] = tmp;
            i -= 2;
        }
        i++;
        i = (i < 1) ? 1 : i;
    }
    for (size_t i = 0; i < elements; i++)
        begin[i]->next = begin[i + 1];
    begin[elements - 1]->next = NULL;
}