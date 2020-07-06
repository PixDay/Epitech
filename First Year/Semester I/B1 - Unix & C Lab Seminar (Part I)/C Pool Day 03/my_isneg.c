/*
** EPITECH PROJECT, 2020
** my_isneg.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <unistd.h>

int my_isneg(int n)
{
    char c = (n < 0) ? 'N' : 'P';

    write(1, &c, 1);
    return 0;
}
