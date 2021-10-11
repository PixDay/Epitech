/*
** EPITECH PROJECT, 2021
** is_number.c
** File description:
** adrien.colombier@epitech.eu
*/

int is_number(char const *str)
{
    int i = 0;

    if (str[i] == '-')
        i++;
    for (; str[i] != '\0'; i++)
    {
        if (str[i] < '0' || str[i] > '9')
            return 1;
    }
    return 0;
}
