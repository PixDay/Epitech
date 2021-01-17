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
  bsq->nbLine = 0;
  bsq->lineSize = 0;
  bsq->mapper.breakLine = 0;
  bsq->mapper.wallChar = 'o';
  bsq->mapper.freeSpaceChar = '.';
  bsq->mapper.solveChar = 'x';
  fillFileContent(bsq);
  fillCharMap(bsq);
  fillSolvedMap(bsq);
  fillIntMap(bsq);
  printf("FILE CONTENT :\n%s\n", bsq->fileContent);
  printf("CHAR MAP :\n%s\n", bsq->charMap);
  for (uint32_t i = 0; bsq->intMap[i] != -2; i++) {
    if (bsq->intMap[i] == -1)
      printf("\n");
    else
      printf("%d ", bsq->intMap[i]);
  }
  printf("NB LINE :\n%d\n", bsq->nbLine);
  printf("LINE SIZE :\n%d\n", bsq->lineSize);
  printf("NB LINE :\n%d\n", bsq->nbLine);
  printf("ERROR :\n%d\n", bsq->error);

  return 0;
}