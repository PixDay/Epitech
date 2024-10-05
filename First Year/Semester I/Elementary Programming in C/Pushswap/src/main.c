/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdio.h>
#include "pushswap.h"

int main(int argc, char **argv)
{
  pushswap_t pushswap;
  uint32_t array_size = argc - 1;

  if (check_args(argc, argv))
    return FAILURE;
  if (init_pushswap(&pushswap, array_size))
    return FAILURE;
  if (fill_number_in_array(argc, argv, pushswap.array_a))
    return FAILURE;
  for (uint32_t i = 0; i < array_size; i++)
    if (pushswap.array_a[i].element < 0)
      pushswap.number_of_negative++;
  sort(&pushswap);
  free_pushswap(&pushswap);
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
