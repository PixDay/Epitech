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

// MERLINE C LIBRARY
int my_strlen(char const *str);
int my_getnbr(char const *str);
int is_number(char const *str);

// PUSHSWAP FUNCTIONS
uint8_t check_args(int argc, char **argv);
uint8_t alloc_and_fille_number_in_array(int argc, char **argv, int32_t array_a);
void    sort(int32_t *array_a, uint32_t array_size);