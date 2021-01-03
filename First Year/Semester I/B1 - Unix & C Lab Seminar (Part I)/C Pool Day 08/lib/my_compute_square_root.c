/*
** EPITECH PROJECT, 2020
** my_compute_square_root.c
** File description:
** adrien.colombier@epitech.eu
*/

int my_compute_square_root(int nb)
{
    int res = 1;

    for (; res * res < nb; res++);
    return (res * res == nb) ? res : 0;
}