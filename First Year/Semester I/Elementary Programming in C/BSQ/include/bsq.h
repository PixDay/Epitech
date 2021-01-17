/*
** EPITECH PROJECT, 2021
** bsq.h
** File description:
** adrien.colombier@epitech.eu
*/

#pragma once

/* STANDART INCLUDES */
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdint.h>

#include <stdio.h>

/* DEFINES */
#define FAILURE 84
#define EOS     1
#define EOL     -1
#define EOM     -2
#define BLOCK   1024

/* TYPES */
typedef struct s_mapper {
  uint32_t breakLine;
  char     wallChar;
  char     freeSpaceChar;
  char     solveChar;
} mapper_t;

typedef struct s_bsq {
  int        fd;
  char      *fileContent;
  char      *charMap;
  char      *solvedMap;
  int32_t   *intMap;
  uint32_t   nbLine;
  uint32_t   lineSize;
  uint32_t   fileSize;
  uint32_t   error;
  mapper_t   mapper;
} bsq_t;

// MERLINE C LIBRARY
int my_strlen(char const *str);
int my_getnbr(char const *str);

// BSQ FUNCTIONS
int  bsq(char const * file);
int  allocateBSQ(bsq_t *bsq, char const *file);
int  fillBSQ(bsq_t *bsq);
void fillFileContent(bsq_t *bsq);
void fillCharMap(bsq_t *bsq);
void fillSolvedMap(bsq_t *bsq);
void fillIntMap(bsq_t *bsq);
void fillNbLine(bsq_t *bsq);
