/*
** EPITECH PROJECT, 2020
** my_print_digits.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <unistd.h>

int my_print_digits(void)
{
    for (unsigned char number = '0'; number <= '9'; number++)
        write(1, &number, 1);
    return 0;
}
