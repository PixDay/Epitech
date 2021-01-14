/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** adrien.colombier@epitech.eu
*/

#include "bsq.h"

int main(int argc, char **argv)
{
  if (argc != 2)
    return FAILURE;
  return bsq(argv[1]);
}