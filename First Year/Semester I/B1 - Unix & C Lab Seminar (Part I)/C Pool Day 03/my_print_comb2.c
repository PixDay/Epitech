/*
** EPITECH PROJECT, 2020
** my_print_comb2.c
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
    int left = (i / 100);
    int right = (i % 100);
    
    if (left < 10)
        my_putchar('0');
    else
        my_putchar('0' + (left / 10));
    my_putchar('0' + (left % 10));
    my_putchar(' ');
    if (right < 10)
        my_putchar('0');
    else
        my_putchar('0' + (right / 10));
    my_putchar('0' + (right % 10));
    if (left != 98 || right != 99)
        write(1, ", ", 2);
}

int is_valid_comb(int i)
{
    int left = i / 100;
    int right = i % 100;

    if (left < right)
        return 1;
    return 0;
}

int my_print_comb2(void)
{
    for (int i = 0; i <= 9999; i++) {
        if (is_valid_comb(i))
            print_comb(i);
    }
    return 0;
}

int main(void)
{
    my_print_comb2();
    return 0;
}