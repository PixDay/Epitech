/*
** EPITECH PROJECT, 2020
** my_swap.c
** File description:
** adrien.colombier@epitech.eu
*/

void my_swap(int *a, int *b)
{
    int tmp = *a;

    *a = *b;
    *b = tmp;
}
