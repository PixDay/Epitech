/*
** EPITECH PROJECT, 2020
** my_find_prime_sup.c
** File description:
** adrien.colombier@epitech.eu
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    for (;my_is_prime(nb) == 0; nb++);
    return nb;
}