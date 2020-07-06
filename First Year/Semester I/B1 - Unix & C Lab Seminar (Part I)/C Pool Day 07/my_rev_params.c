/*
** EPITECH PROJECT, 2020
** my_rev_params.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char const *str)
{
    for (size_t i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
}

int main(int argc, char **argv)
{
    for (int i = argc - 1; i >= 0; i--) {
        my_putstr(argv[i]);
        my_putchar('\n');
    }
    return 0;
}