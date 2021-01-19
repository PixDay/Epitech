/*
** EPITECH PROJECT, 2020
** algo.c
** File description:
** adrien.colombier@epitech.eu
*/

#include "bsq.h"

void algoUpdateIntMap(bsq_t *bsq)
{
  uint32_t minValue = 0;

  for (uint32_t i = 0; bsq->intMap[i] != -2; i++) {
    if (bsq->intMap[i] >= 0) {
      minValue = getMinValue(bsq, i);
      bsq->intMap[i] = minValue;
    }
    if (bsq->squareSize < minValue) {
      bsq->solutionIndex = i;
      bsq->squareSize = minValue;
    }
    minValue = 0;
  }
}

void algoWriteSolution(bsq_t *bsq)
{
  for (uint32_t currentLine = 0; currentLine < bsq->squareSize; currentLine++) {
    for (uint32_t currentColumn = bsq->solutionIndex; currentColumn--) {

    }
  }
}

uint32_t getMinValue(bsq_t *bsq, uint32_t index)
{
  int min = 0;

  if (index <= bsq->lineSize || bsq->intMap[index - 1] == -1 ||
      bsq->intMap[index] == 0)
    return bsq->intMap[index];
  min = bsq->intMap[index - 1];
  if (min > bsq->intMap[index - bsq->lineSize])
    min = bsq->intMap[index - bsq->lineSize];
  if (min > bsq->intMap[index - bsq->lineSize - 1])
    min = bsq->intMap[index - bsq->lineSize - 1];
  return min + 1;
}