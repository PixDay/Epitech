/*
** EPITECH PROJECT, 2021
** allocation.c
** File description:
** adrien.colombier@epitech.eu
*/

#include "pushswap.h"

uint8_t fill_number_in_array(int argc, char **argv, my_array_element_t *array_a)
{
    if (array_a == NULL)
        return FAILURE;
    for (int32_t i = 1; i < argc; i++)
    {
        array_a[i-1].element = my_getnbr(argv[i]);
    }
    for (int32_t i = 0; i < argc - 1; i++)
    {
        if (i == argc - 2)
            array_a[i].next = NULL;
        else
            array_a[i].next = &array_a[i + 1];
    }
    return SUCCESS;
}

uint8_t init_pushswap(pushswap_t *pushswap, uint32_t array_size)
{
    if (pushswap == NULL)
        return FAILURE;
    pushswap->array_a = malloc(array_size * sizeof(my_array_element_t));
    pushswap->array_b = malloc(array_size * sizeof(my_array_element_t));
    pushswap->operations = malloc(BLOCK * sizeof(char));
    if (pushswap->array_a == NULL ||
        pushswap->array_b == NULL ||
        pushswap->operations == NULL)
        return FAILURE;
    pushswap->a_entry = pushswap->array_a;
    pushswap->b_entry = pushswap->array_b;
    pushswap->array_size = array_size;
    pushswap->operations_current_chars = 0;
    pushswap->current_elements_in_a = array_size;
    pushswap->current_elements_in_b = 0;
    pushswap->bit_comparator = 0x1;
    pushswap->operations_allocated_size = BLOCK;
    pushswap->number_of_negative = 0;
    return SUCCESS;
}

uint8_t free_pushswap(pushswap_t *pushswap)
{
    if (pushswap == NULL)
        return FAILURE;
    free(pushswap->a_entry);
    free(pushswap->b_entry);
    free(pushswap->operations);
    return SUCCESS;
}