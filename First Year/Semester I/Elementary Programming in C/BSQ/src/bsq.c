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
  if (error)
    return FAILURE;
  error = allocateBSQ(&bsq, file);
  if (error)
    return FAILURE;
  fillBSQ(&bsq);
  findBSQ(&bsq);
  printFreeBSQ(&bsq);
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

void fillBSQ(bsq_t *bsq)
{
  bsq->error = EXIT_SUCCESS;
  bsq->nbLine = 0;
  bsq->lineSize = 0;
  bsq->solutionIndex = 0;
  bsq->squareSize = 0;
  bsq->mapper.breakLine = 0;
  bsq->mapper.wallChar = 'o';
  bsq->mapper.freeSpaceChar = '.';
  bsq->mapper.solveChar = 'x';
  fillFileContent(bsq);
  fillCharMap(bsq);
  fillSolvedMap(bsq);
  fillIntMap(bsq);
  fillNbLine(bsq);
}

void findBSQ(bsq_t *bsq)
{
  algoUpdateIntMap(bsq);
  algoWriteSolution(bsq);
}

void printFreeBSQ(bsq_t *bsq)
{
  write(1, bsq->solvedMap, bsq->lineSize * bsq->nbLine);
  free(bsq->fileContent);
  free(bsq->charMap);
  free(bsq->solvedMap);
  free(bsq->intMap);
}