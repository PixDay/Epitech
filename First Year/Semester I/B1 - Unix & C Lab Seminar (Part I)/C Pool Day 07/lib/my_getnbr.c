/*
** EPITECH PROJECT, 2020
** my_getnbr.c
** File description:
** adrien.colombier@epitech.eu
*/

int my_getnbr(char const *str)
{
    int res = 0;
    int is_neg = 0;
    int idx = 0;
    
    for (; str[idx] != '\0' && (str[idx] < '0' || str[idx] > '9'); idx++);
    if (idx != 0 && str[idx - 1] == '-')
        is_neg = 1;
    for (; str[idx] != '\0' && (str[idx] >= '0' && str[idx] <= '9'); idx++) {
        res *= 10;
        res *= (is_neg == 1 && res > 0) ? -1 : 1; 
        res += (is_neg == 1) ? -(str[idx] - '0') : str[idx] - '0';
        if ((is_neg == 1 && res > 0) || (is_neg == 0 && res < 0))
            return 0;
    }
    return res;
}