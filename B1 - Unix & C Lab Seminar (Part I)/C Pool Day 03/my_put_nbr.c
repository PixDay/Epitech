/*
** EPITECH PROJECT, 2020
** my_put_nbr.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_put_nbr(int nb)
{
    static int negatif = 0;
    static int zero = 0;
    
    if (zero == 0 && nb == 0)
        my_putchar('0');
    if (zero == 0)
        zero = 1;
    if (nb < 0 && negatif == 0) {
        negatif = 1;
        my_putchar('-');
    }
    if (nb != 0) {
        my_put_nbr(nb / 10);
        my_putchar('0' + (((nb % 10) < 0) ? -(nb % 10) : nb % 10));
    }
    return 0;
}