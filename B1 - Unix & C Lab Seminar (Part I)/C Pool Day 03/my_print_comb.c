/*
** EPITECH PROJECT, 2020
** my_print_comb.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void print_comb(int i)
{
    if (i < 100)
        my_putchar('0');
    else
        my_putchar('0' + (i / 100));
    if (i < 10)
        my_putchar('0');
    else
        my_putchar('0' + (i / 10 % 10));
    my_putchar('0' + (i % 10));
    if (i < 789)
        write(1, ", ", 2);
}

int is_valid_comb(int i)
{
    if ((i % 10) > (i / 10 % 10) && (i / 10 % 10) > (i / 100))
        return 1;
    return 0;
}

int my_print_comb(void)
{
    for (int i = 0; i <= 999; i++) {
        if (is_valid_comb(i))
            print_comb(i);
    }
    return 0;
}

int main(void)
{
    my_print_comb();
    return 0;
}