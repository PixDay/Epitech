/*
** EPITECH PROJECT, 2020
** mylist.h
** File description:
** adrien.colombier@epitech.eu
*/

#pragma once

typedef struct linked_list
{
    void *data;
    struct linked_list *next;
} linked_list_t;