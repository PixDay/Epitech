/*
** EPITECH PROJECT, 2020
** my_compute_factorial_it.c
** File description:
** adrien.colombier@epitech.eu
*/

int my_compute_factorial_it(int nb)
{
    int res = 1;

    if (nb < 0)
        return 0;
    if (nb == 0)
        return 1;
    for (; nb > 1; nb--)
        res *= nb;
    return res;
}