/*
** EPITECH PROJECT, 2020
** my_putnbr_base.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>
#include <unistd.h>

int my_strlen(char const *str)
{
    int res = 0;

    while (str[res] != '\0')
        res++;
    return res;
}

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putnbr_base(int nbr, char const *base)
{
    size_t baseSize = my_strlen(base);

    if (nbr != 0) {
        my_putnbr_base(nbr / baseSize, base);
        my_putchar(base[nbr % baseSize]);
    }
    return 0;
}