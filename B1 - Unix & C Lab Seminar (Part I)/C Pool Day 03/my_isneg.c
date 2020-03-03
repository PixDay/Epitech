/*
** EPITECH PROJECT, 2020
** my_isneg.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <unistd.h>

int my_isneg(int n)
{
    write(1, (n < 0) ? 'N' : 'P', 1);
    return 0;
}
