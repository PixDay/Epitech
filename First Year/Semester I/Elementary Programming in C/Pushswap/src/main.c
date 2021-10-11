/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** adrien.colombier@epitech.eu
*/

#include "pushswap.h"

int main(int argc, char **argv)
{
  int32_t *array_a = NULL;
  uint32_t array_size = argc - 1;

  if (argc < 2)
    return FAILURE;
  if (check_args(argc, argv))
    return FAILURE;
  if (alloc_and_fille_number_in_array(argc, argv, array_a))
    return FAILURE;
  sort(array_a, array_size);
  return SUCCESS;
}