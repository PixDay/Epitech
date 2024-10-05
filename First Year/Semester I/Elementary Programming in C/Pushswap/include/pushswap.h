/*
** EPITECH PROJECT, 2021
** pushswap.h
** File description:
** adrien.colombier@epitech.eu
*/

#pragma once

/* STANDART INCLUDES */
#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>

/* DEFINES */
#define FAILURE 84
#define SUCCESS 0
#define BLOCK   1024

/* TYPES */
typedef struct my_array_element_s
{
    int32_t  element;
    struct my_array_element_s *next;
} my_array_element_t;
typedef struct pushswap_s
{
  my_array_element_t *array_a;
  my_array_element_t *array_b;
  my_array_element_t *a_entry;
  my_array_element_t *b_entry;
  uint32_t array_size;
  uint32_t current_elements_in_a;
  uint32_t current_elements_in_b;
  uint32_t operations_current_chars;
  uint32_t operations_allocated_size;
  int64_t bit_comparator;
  uint64_t number_of_negative;
  char *operations;
} pushswap_t;

// MERLINE C LIBRARY
int my_strlen(char const *str);
int my_getnbr(char const *str);
int is_number(char const *str);

// PUSHSWAP FUNCTIONS
uint8_t check_args(int argc, char **argv);
uint8_t init_pushswap(pushswap_t *pushswap, uint32_t array_size);
uint8_t fill_number_in_array(int argc, char **argv, my_array_element_t *array_a);
uint8_t sort(pushswap_t *pushswap);
uint8_t free_pushswap(pushswap_t *pushswap);
