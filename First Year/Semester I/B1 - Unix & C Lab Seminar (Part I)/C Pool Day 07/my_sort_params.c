/*
** EPITECH PROJECT, 2020
** my_sort_params.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>

int shouldSwap(char const *s1, char const *s2)
{
    for(size_t i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
        if (s1[i] < s2[i])
            return 1;
    return 0;
}

int main(int argc, char **argv)
{
    char *tmp = NULL;

    for (size_t i = 1; i < argc; i++) {
        if (shouldSwap(argv[i], argv[i - 1])) {
            tmp = argv[i];
            argv[i] = argv[i - 1];
            argv[i - 1] = tmp;
            i -= 2;
        }
        i = (i < 1) ? 1 : i;
    }
}