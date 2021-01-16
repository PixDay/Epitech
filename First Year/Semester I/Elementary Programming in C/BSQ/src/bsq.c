/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** adrien.colombier@epitech.eu
*/

#include "bsq.h"

int bsq(char const *file)
{
  bsq_t bsq;
  struct stat fileInfo;
  int32_t error = 0;

  error = stat(file, &fileInfo);
  printf("error = %d\n", error);
  printf("file size = %ld\n", fileInfo.st_size);
  error = allocateBSQ(&bsq, file, fileInfo.st_size);
  error = fillBSQ(&bsq);
  if (error)
    return FAILURE;
  /*findBSQ(&bsq);
  printBSQ(&bsq);*/
  return EXIT_SUCCESS;
}

int allocateBSQ(bsq_t *bsq, char const *file, uint32_t fileSize)
{
  bsq->fd = open(file, O_RDONLY);
  bsq->fileContent = malloc(fileSize * sizeof(char));
  bsq->charMap = malloc(fileSize * sizeof(char));
  bsq->solvedMap = malloc(fileSize * sizeof(char));
  bsq->intMap = malloc(fileSize * sizeof(int32_t));
  if (bsq->fd == -1 || bsq->fileContent == NULL || bsq->charMap == NULL ||
      bsq->solvedMap == NULL || bsq->intMap == NULL)
    return FAILURE;
  return 0;
}

int fillBSQ(bsq_t *bsq)
{
  (void)bsq;
  printf("fillBSQ function\n");
  return 0;
}