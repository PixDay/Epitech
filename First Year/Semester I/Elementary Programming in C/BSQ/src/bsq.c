/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** adrien.colombier@epitech.eu
*/

#include "bsq.h"

int bsq(char const * file)
{
  bsq_t bsq;
  struct stat fileInfo;
  int error = 0;

  error = stat(file, &fileInfo);
  printf("error = %d\n", error);
  printf("file size = %ld\n", fileInfo.st_size);
  (void)bsq;
  error = allocateBSQ(&bsq);
  error = fillBSQ(&bsq);
  if (error)
    return FAILURE;
  /*findBSQ(&bsq);
  printBSQ(&bsq);*/
  return EXIT_SUCCESS;
}

int allocateBSQ(bsq_t *bsq)
{
  (void)bsq;
  printf("AllocateBSQ function\n");
  return 0;
}

int fillBSQ(bsq_t *bsq)
{
  (void)bsq;
  printf("fillBSQ function\n");
  return 0;
}