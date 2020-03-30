/*
** EPITECH PROJECT, 2020
** my_print_combn.c
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
    negatif = 0;
    zero = 0;
    return 0;
}

void print_comb(int i, int size, int first)
{
    int digits = 0;
    int cpy = i;

    for (; cpy != 0; cpy = cpy / 10)
        digits++;
    if (first == 1) {
        my_putchar(',');
        my_putchar(' ');
    }
    if (digits < size)
        my_putchar('0');
    my_put_nbr(i);
}

int is_valid_comb(int i, int size)
{
    size_t divider = 1;
    int digits = 0;
    int cpy = i;

    for (; cpy != 0; cpy = cpy / 10)
        digits++;
    if (digits < size - 1)
        return 0;
    for (int j = 1; j < size; j++) {
        if ((i / divider % 10) <= (i / (divider * 10) % 10))
            return 0; 
        divider = divider * 10;
    }
    return 1;
}

int my_print_combn(int n)
{   
    size_t size = 1;
    int first = 0;

    for (int i = 0; i < n; i++)
        size *= 10;
    for (int i = 0; i <= size; i++) {
        if (is_valid_comb(i, n)) {
            print_comb(i, n, first);
            first = 1;
        }
    }
    return 0;
}