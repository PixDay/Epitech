/*
** EPITECH PROJECT, 2020
** my_evil_str.c
** File description:
** adrien.colombier@epitech.eu
*/

char *my_evil_str(char *str)
{
    char tmp;
    int length = my_strlen(str);
    
    for (int i = 0; i < length / 2; i++) {
        tmp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = tmp;
    }
    return str;
}
