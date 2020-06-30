/*
** EPITECH PROJECT, 2020
** my_is_prime.c
** File description:
** adrien.colombier@epitech.eu
*/

int my_is_prime(int nb)
{
    int tmp;

    if (nb <= 1)
        return 0;
    for (int i = 2; i < nb; i++) {
        tmp = nb / i;
        if (i * tmp == nb)
            return 0;
    }
        
    return 1;
}