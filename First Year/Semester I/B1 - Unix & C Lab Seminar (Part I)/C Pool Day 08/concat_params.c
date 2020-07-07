/*
** EPITECH PROJECT, 2020
** concat_params.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>
#include <string.h>

char *concat_params(int argc, char **argv)
{
    size_t len = 0;
    size_t destIndex = 0;
    char *dest = NULL;

    for (size_t i = 0; i < argc; i++)
        len += (strlen(argv[i]) + 1);
    dest = malloc(len * sizeof(char) + 1);
    for(size_t i = 0; i < argc; i++) {
        for(size_t j = 0; argv[i][j] != '\0'; j++) {
            dest[destIndex] = argv[i][j];
            destIndex++;
        }
        if (i < argc - 1)
            dest[destIndex++] = '\n';
    }
    dest[destIndex] = '\0';
    return dest;       
}