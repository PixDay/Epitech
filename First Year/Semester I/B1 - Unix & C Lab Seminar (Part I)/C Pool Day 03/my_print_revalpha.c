/*
** EPITECH PROJECT, 2020
** my_print_revalpha.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <unistd.h>

int my_print_revalpha(void)
{
    for (unsigned char letter = 'z'; letter >= 'a'; letter--)
        write(1, &letter, 1);
    return 0;
}
