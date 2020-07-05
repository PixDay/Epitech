/*
** EPITECH PROJECT, 2020
** my_showstr.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void putHexa(int n)
{
    char const *str = "0123456789abcdef";
    size_t left = n / 16;
    size_t right = n % 16;

    my_putchar('\\');
    my_putchar(str[left]);
    my_putchar(str[right]);
}

int my_showstr(char const *str)
{
    for (size_t i = 0; str[i] != '\0'; i++) {
        if ((int)(str[i]) >= ' ')
            my_putchar(str[i]);
        else
            putHexa((int)(str[i]));    
    }
    return 0;
}