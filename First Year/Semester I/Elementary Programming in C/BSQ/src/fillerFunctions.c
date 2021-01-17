/*
** EPITECH PROJECT, 2020
** fillerFunctions.c
** File description:
** adrien.colombier@epitech.eu
*/

#include "bsq.h"

void fillFileContent(bsq_t *bsq)
{
  bsq->fileContent[bsq->fileSize] = '\0';
  read(bsq->fd, bsq->fileContent, bsq->fileSize);
}

void fillCharMap(bsq_t *bsq)
{
  uint32_t startingMap = 0;
  uint32_t lineSize = 0;

  for (uint32_t i = 0; i < bsq->fileSize; i++)
    bsq->charMap[i] = '\0';
  while (bsq->fileContent[startingMap++] != '\n');
  for (uint32_t i = 0; bsq->fileContent[startingMap + i] != '\0'; i++) {
    bsq->charMap[i] = bsq->fileContent[startingMap + i];
    lineSize++;
    if (bsq->charMap[i] == '\n') {
      bsq->nbLine++;
      if (bsq->lineSize == 0)
        bsq->lineSize = lineSize;
      if (lineSize != bsq->lineSize)
        bsq->error = FAILURE;
      lineSize = 0;
    }
  }
}

void fillSolvedMap(bsq_t *bsq)
{
  uint32_t index = 0;

  while (bsq->charMap[index] != '\0') {
    bsq->solvedMap[index] = bsq->charMap[index];
    index++;
  }
  bsq->solvedMap[index] = '\0';
}

void fillIntMap(bsq_t *bsq)
{
  uint32_t index = 0;

  while (bsq->charMap[index] != '\0') {
    bsq->intMap[index] = 1;
    if (bsq->charMap[index] == 'o')
      bsq->intMap[index] = 0;
    if (bsq->charMap[index] == '\n')
      bsq->intMap[index] = EOL;
    index++;
  }
  bsq->intMap[index] = EOM;
}

void fillNbLine(bsq_t *bsq)
{
  uint32_t nbLine = my_getnbr(bsq->fileContent);

  if (nbLine != bsq->nbLine)
    bsq->error = FAILURE;
}