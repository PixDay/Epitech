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
  
}

void fillSolvedMap(bsq_t *bsq)
{
  (void)bsq;
}

void fillIntMap(bsq_t *bsq)
{
  (void)bsq;
}