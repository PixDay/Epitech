/*
** EPITECH PROJECT, 2020
** my_str_to_word_array.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <stdlib.h>

int getWords(char const *str)
{
    size_t words = 1;

    for (size_t i = 0; str[i] != '\0'; i++) 
        if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z') &&
            (str[i] < '0' || str[i] > '9'))
            words++;
    return words;
}

int getWordSize(char const *str)
{
    size_t i = 0;

    while (((str[i] >= 'a' && str[i] <= 'z') || 
           (str[i] >= 'A' && str[i] <= 'Z') || 
           (str[i] >= '0' && str[i] <= '9')) && 
           str[i] != '\0')
            i++;
    return i;
}

char **my_str_to_word_array(char const *str)
{
    char **dest = NULL;
    size_t arrayIndex = 0;
    
    dest = malloc((getWords(str) + 1) * sizeof(char *));
    if (dest == NULL)
        return NULL;
    for (size_t i = 0; str[i] != '\0'; i++) {
        dest[arrayIndex] = malloc(getWordSize(&(str[i])) * sizeof(char) + 1);
        for (size_t j = 0; ((str[i] >= 'a' && str[i] <= 'z') || 
           (str[i] >= 'A' && str[i] <= 'Z') || 
           (str[i] >= '0' && str[i] <= '9')) && 
           str[i] != '\0'; j++) {
                dest[arrayIndex][j] = str[i];
                i++;
                dest[arrayIndex][j + 1] = '\0';
            }
        arrayIndex++;
    }
    dest[arrayIndex] = NULL;
    return dest;
}