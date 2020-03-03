/*
** EPITECH PROJECT, 2020
** my_print_alpha.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <unistd.h>

int my_print_alpha(void)
{
    for (unsigned char letter = 'a'; letter <= 'z'; letter++)
        write(1, &letter, 1);
}
