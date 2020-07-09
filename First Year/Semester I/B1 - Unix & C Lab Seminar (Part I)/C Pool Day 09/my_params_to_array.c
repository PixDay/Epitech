/*
** EPITECH PROJECT, 2020
** my_params_to_array.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>

struct info_param
{
    int length;
    char *str;
    char *cpy;
    char **word_array;
};

struct info_param *my_params_to_array(int ac, char ** av)
{
    struct info_param *params = malloc((ac + 1) * sizeof(struct info_param));

    if (params == NULL)
        return NULL;
    for(size_t i = 0; i < ac; i++) {
        params[i].length = my_strlen(av[i]);
        params[i].str = malloc(my_strlen(av[i]) * sizeof(char));
        params[i].cpy = malloc(my_strlen(av[i]) * sizeof(char));
        if (params[i].str == NULL || params[i].cpy == NULL)
            return NULL;
        params[i].str = av[i];
        params[i].cpy = my_strcpy(params[i], av[i]);
        params[i].word_array = my_str_to_word_array(av[i]);
    }
    params[ac].str = NULL;
    return params;
}