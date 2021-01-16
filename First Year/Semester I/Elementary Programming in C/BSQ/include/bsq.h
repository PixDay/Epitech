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

#include <stdio.h>

/* DEFINES */
#define FAILURE 84

/* TYPES */
typedef struct s_bsq {
  int   fd;
  char *fileContent;
  char *charMap;
  char *solvedMap;
  int  *intMap;
  int   nbLine;
  int   lineSize;
} bsq_t;

// MERLINE C LIBRARY
int my_strlen(char const *str);

// BSQ FUNCTIONS
int bsq(char const * file);
int allocateBSQ(bsq_t *bsq);
int fillBSQ(bsq_t *bsq);
