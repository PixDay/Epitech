/*
** EPITECH PROJECT, 2021
** sort.c
** File description:
** adrien.colombier@epitech.eu
*/

#include "pushswap.h"

void handle_neg_rra(pushswap_t *pushswap) {
    for (uint32_t i = 0; i < pushswap->number_of_negative; i++)
    {
        if (pushswap->operations_current_chars + 4 >= pushswap->operations_allocated_size) {
            pushswap->operations_allocated_size += BLOCK;
            pushswap->operations = realloc(pushswap->operations, pushswap->operations_allocated_size);
        }
        pushswap->operations[pushswap->operations_current_chars] = ' ';
        pushswap->operations_current_chars++;
        pushswap->operations[pushswap->operations_current_chars] = 'r';
        pushswap->operations_current_chars++;
        pushswap->operations[pushswap->operations_current_chars] = 'r';
        pushswap->operations_current_chars++;
        pushswap->operations[pushswap->operations_current_chars] = 'a';
        pushswap->operations_current_chars++;
    }
}

void ra(pushswap_t *pushswap) {
    my_array_element_t *old_head = pushswap->array_a;
    my_array_element_t *tail = pushswap->array_a;

    if (pushswap->current_elements_in_a < 2)
        return;
    pushswap->array_a = pushswap->array_a->next;
    while (tail->next != NULL)
        tail = tail->next;
    tail->next = old_head;
    old_head->next = NULL;
    if (pushswap->operations_current_chars + 3 >= pushswap->operations_allocated_size) {
        pushswap->operations_allocated_size += BLOCK;
        pushswap->operations = realloc(pushswap->operations, pushswap->operations_allocated_size);
    }
    pushswap->operations[pushswap->operations_current_chars] = ' ';
    pushswap->operations_current_chars++;
    pushswap->operations[pushswap->operations_current_chars] = 'r';
    pushswap->operations_current_chars++;
    pushswap->operations[pushswap->operations_current_chars] = 'a';
    pushswap->operations_current_chars++;
}

void pb(pushswap_t *pushswap)
{
    my_array_element_t *old_head = pushswap->array_a;

    pushswap->array_a = pushswap->array_a->next;
    pushswap->current_elements_in_a--;
    old_head->next = pushswap->array_b;
    pushswap->array_b = old_head;
    if (pushswap->operations_current_chars + 3 >= pushswap->operations_allocated_size) {
        pushswap->operations_allocated_size += BLOCK;
        pushswap->operations = realloc(pushswap->operations, pushswap->operations_allocated_size);
    }
    pushswap->current_elements_in_b++; 
    pushswap->operations[pushswap->operations_current_chars] = ' ';
    pushswap->operations_current_chars++;
    pushswap->operations[pushswap->operations_current_chars] = 'p';
    pushswap->operations_current_chars++;
    pushswap->operations[pushswap->operations_current_chars] = 'b';
    pushswap->operations_current_chars++;
}

void pa(pushswap_t *pushswap)
{
    my_array_element_t *old_head = pushswap->array_b;

    pushswap->array_b = pushswap->array_b->next;
    pushswap->current_elements_in_b--;
    old_head->next = pushswap->array_a;
    pushswap->array_a = old_head;
    pushswap->current_elements_in_a++;
    if (pushswap->operations_current_chars + 3 >= pushswap->operations_allocated_size) {
        pushswap->operations_allocated_size += BLOCK;
        pushswap->operations = realloc(pushswap->operations, pushswap->operations_allocated_size);
    }
    pushswap->operations[pushswap->operations_current_chars] = ' ';
    pushswap->operations_current_chars++;
    pushswap->operations[pushswap->operations_current_chars] = 'p';
    pushswap->operations_current_chars++;
    pushswap->operations[pushswap->operations_current_chars] = 'a';
    pushswap->operations_current_chars++;
}

uint8_t sort(pushswap_t *pushswap)
{
    my_array_element_t *head = pushswap->array_a;
    uint32_t elems_in_a = pushswap->current_elements_in_a;
    uint32_t elems_in_b = pushswap->current_elements_in_b;

    while (pushswap->bit_comparator < 0x100000000) {
        elems_in_a = pushswap->current_elements_in_a;
        for (uint32_t i = 0; i < elems_in_a; i++) {
            if (!(head->element & pushswap->bit_comparator)) {
                head = head->next;
                pb(pushswap);
            }
            else {
                head = head->next;
                ra(pushswap);
            }
        }
        elems_in_b = pushswap->current_elements_in_b;
        for (uint32_t i = 0; i < elems_in_b; i++) {
            pa(pushswap);
        }
        head = pushswap->array_a;
        pushswap->bit_comparator <<= 1;
    }
    handle_neg_rra(pushswap);
    write(1, &(pushswap->operations[1]), pushswap->operations_current_chars - 1);
    return SUCCESS;
}
