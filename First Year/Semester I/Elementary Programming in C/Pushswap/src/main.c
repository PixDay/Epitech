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

  if (check_args(argc, argv))
    return FAILURE;
  if (alloc_and_fill_number_in_array(argc, argv, array_a))
    return FAILURE;
  sort(array_a, array_size);
  return SUCCESS;
}

uint8_t check_args(int argc, char **argv)
{
  if (argc < 2)
    return FAILURE;
  for (uint32_t i = 1; i < (uint32_t)argc; i++)
  {
    if (is_number(argv[i]) != 0)
      return FAILURE;
  }
  return SUCCESS;
}
