/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** adrien.colombier@epitech.eu
*/

#include "my.h"
#include "my_opp.h"
#include <stdlib.h>

int contain_digit(char const *str)
{
    for(size_t i = 0; str[i] != '\0'; i++)
        if (str[i] <= '9' && str[i] >= '0')
            return 0;
    return 1;
}

int error(int argc, char **argv)
{
    if (argc != 4) {
        my_putstr("0\n");
        return 84;
    }
    if (contain_digit(argv[1]) || contain_digit(argv[3])) {
        my_putstr("0\n");
        return 84;
    }
    return 0;
}

int divide(int left, int right, char *symbol)
{
    if (right == 0 && symbol[0] == '/') {
        my_putstr("Stop: division by zero\n");
        return 84;
    }
    if (right == 0 && symbol[0] == '%') {
        my_putstr("Stop: modulo  by zero\n");
        return 84;
    }
    if (symbol[0] == '/')
        my_put_nbr(left / right);
    if (symbol[0] == '%')
        my_put_nbr(left % right);
    return 0;
}

int make_calcul(char **argv)
{
    int left = my_getnbr(argv[1]);
    int right = my_getnbr(argv[3]);

    if (argv[2][0] == '+')
        my_put_nbr(left + right);
    else if (argv[2][0] == '-')
        my_put_nbr(left - right);
    else if (argv[2][0] == '*')
        my_put_nbr(left * right);
    else if (argv[2][0] == '/' || argv[2][0] == '%') {
        if (divide(left, right, argv[2]))
            return 84;
    }
    else {
        my_putstr("error: only [ + - / * % ] are supported\n");
        return 84;
    }
    my_putchar('\n');
    return 0;
}

int main(int argc, char **argv)
{
    if (error(argc, argv))
        return 84;
    if (make_calcul(argv))
        return 84;
    return 0;
}