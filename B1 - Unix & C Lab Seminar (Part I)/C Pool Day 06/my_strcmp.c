/*
** EPITECH PROJECT, 2020
** my_strcmp.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>

int my_strcmp(char const *s1, char const *s2)
{
    for (size_t i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
        if (s1[i] != s2[i])
            return (s1[i] - s2[i] < 0) ? -1 : 1;
    return 0;
}

int main(void)
{
    printf("%d\n", my_strcmp("adedigado", "adedigadoo"));
    printf("%d\n", strcmp("adedigado", "adedigadoo"));
    return 0;
}