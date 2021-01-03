/*
** EPITECH PROJECT, 2021
** concat_params.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdio.h>
#include <stdlib.h>

char *my_strdup(char const *src);
char* my_revstr(char *str);
int my_strlen(char const *str);

int getValue(char const *nbr, char const *base_from)
{
  int baseSize = my_strlen(base_from);
  int basePow = 1;
  int res = 0;
  int colValue = -1;

  for (int i = my_strlen(nbr) - 1; i >= 0; i--) {
    for (int j = 0; base_from[j] != '\0'; j++)
      if (base_from[j] == nbr[i])
        colValue = j;
    if (colValue == -1)
      return -84;
    res = res + basePow * colValue;
    basePow *= baseSize;
    colValue = -1;
  }
  return res;
}

char *convertTo(int nbr, char const *base_to) 
{
  char *res = malloc(sizeof(int)); // smallest base is binary and so 4 byte is 32 bites wich will fit the binary base
  int baseLen = my_strlen(base_to);
  int index = 0;

  if (res == NULL)
    return NULL;
  while (nbr != 0) {
    res[index] = base_to[nbr % baseLen];
    nbr = nbr / baseLen;
    index++;
  }
  res[index] = '\0';
  return my_revstr(res);
}

char *convert_base(char const *nbr, char const *base_from, char const *base_to)
{
  int nbrValue = getValue(nbr, base_from);

  if (nbrValue == -84)
    return NULL;
  return (convertTo(nbrValue, base_to));
}
