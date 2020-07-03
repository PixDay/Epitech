/*
** EPITECH PROJECT, 2020
** my_strlen.c
** File description:
** adrien.colombier@epitech.eu
*/

int my_strlen(char const *str)
{
    int res = 0;

    while (str[res] != '\0')
        res++;
    return res;
}
