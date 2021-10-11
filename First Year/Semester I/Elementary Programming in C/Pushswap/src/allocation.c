/*
** EPITECH PROJECT, 2021
** allocation.c
** File description:
** adrien.colombier@epitech.eu
*/

#include "pushswap.h"

uint8_t alloc_and_fill_number_in_array(int argc, char **argv, int32_t *array_a)
{
    array_a = malloc((argc - 1) * sizeof(int32_t));
    if (array_a == NULL)
        return FAILURE;
    for (int32_t i = 1; i < argc; i++)
    {
        array_a[i] = my_getnbr(argv[i]);
    }
    return SUCCESS;
}