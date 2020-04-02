/*
** EPITECH PROJECT, 2020
** my_compute_power_it.c
** File description:
** adrien.colombier@epitech.eu
*/

int my_compute_power_it(int nb, int p)
{
    int res = nb;
    
    if (p < 0)
        return 0;
    if (p == 0)
        return 1;
    for (int i = 1; i < p; i++)
        res = res * nb;
    return res;
}