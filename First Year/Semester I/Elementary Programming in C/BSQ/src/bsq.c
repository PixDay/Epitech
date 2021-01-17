/*
** EPITECH PROJECT, 2020
** bsq.c
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
  bsq.fileSize = fileInfo.st_size;
  error = allocateBSQ(&bsq, file);
  error = fillBSQ(&bsq);
  if (error)
    return FAILURE;
  /*findBSQ(&bsq);
  printBSQ(&bsq);*/
  return EXIT_SUCCESS;
}

int allocateBSQ(bsq_t *bsq, char const *file)
{
  bsq->fd = open(file, O_RDONLY);
  bsq->fileContent = malloc((bsq->fileSize + EOS) * sizeof(char));
  bsq->charMap = malloc(bsq->fileSize * sizeof(char));
  bsq->solvedMap = malloc(bsq->fileSize * sizeof(char));
  bsq->intMap = malloc(bsq->fileSize * sizeof(int32_t));
  if (bsq->fd == -1 || bsq->fileContent == NULL || bsq->charMap == NULL ||
      bsq->solvedMap == NULL || bsq->intMap == NULL)
    return FAILURE;
  return 0;
}

int fillBSQ(bsq_t *bsq)
{
  bsq->error = EXIT_SUCCESS;
  bsq->mapper.breakLine = 0;
  bsq->mapper.wallChar = 'o';
  bsq->mapper.freeSpaceChar = '.';
  bsq->mapper.solveChar = 'x';
  fillFileContent(bsq);
  fillCharMap(bsq);
  fillSolvedMap(bsq);
  fillIntMap(bsq);
  return 0;
}