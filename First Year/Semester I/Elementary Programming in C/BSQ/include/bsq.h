/*
** EPITECH PROJECT, 2021
** bsq.h
** File description:
** adrien.colombier@epitech.eu
*/

/* STANDART INCLUDES */
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdint.h>

#include <stdio.h>

/* DEFINES */
#define FAILURE 84

/* TYPES */
typedef struct s_bsq {
  int        fd;
  char      *fileContent;
  char      *charMap;
  char      *solvedMap;
  uint32_t  *intMap;
  uint32_t   nbLine;
  uint32_t   lineSize;
  uint32_t   fileSize;
  mapper_t   mapper;
} bsq_t;

typedef struct s_mapper {
  uint32_t breakLine;
  char     wallChar;
  char     freeSpaceChar;
  char     solveChar;
} mapper_t;

// MERLINE C LIBRARY
int my_strlen(char const *str);

// BSQ FUNCTIONS
int bsq(char const * file);
int allocateBSQ(bsq_t *bsq, char const *file);
int fillBSQ(bsq_t *bsq);
