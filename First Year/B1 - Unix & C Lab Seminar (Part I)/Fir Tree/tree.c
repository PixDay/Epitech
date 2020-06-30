/*
** EPITECH PROJECT, 2020
** tree.c
** File description:
** adrien.colombier@epitech.eu
*/

#include "my.h"

int get_max_line(int nb)
{
    int line = 4;
    int max_line = 0;

    for (int i = 0; i != nb; i++, line++) {
        max_line += line;
    }
    return (max_line);
}

int get_max_col(int nb)
{
    int max_col = 1;
    int line = 4;
    int red = 1;
    
    for (int i = 0; i != nb; i++, line++) {
        max_col += (2 * (line - red));
        if (i % 2 == 0)
            red++;
    }
    return (max_col);
}

void line_element(int nb, int max_col, int max_line)
{
    int block = 1;
    int block_limit = get_max_line(block);
    int red = 0;
    int id_spc = 0;

    for (int i = 0; i != max_line; i++) {
        if (i == block_limit) {
            block++;
            block_limit = get_max_line(block);
            red += (block % 2 == 0) ? 1 : 0;
            id_spc -= (red + 1);
        }
        for (int spc = 0; spc != max_col / 2 - id_spc; spc++)
            my_putchar(' ');
        for (int star = 0; star != 1 + (id_spc * 2); star++)
            my_putchar('*');
        my_putchar('\n');
        id_spc += 1;
    }
}

void trunc_element(int nb, int max_col)
{
    int size = nb;
    int ep = nb;

    if (nb % 2 == 0)
        ep += 1;
    for (int i = 0; i != size; i++) {
        for (int spc = 0; spc != (max_col / 2 - ep / 2); spc++)
            my_putchar(' ');
        for (int p = 0; p != ep; p++)
            my_putchar('|');
        my_putchar('\n');
    }
}

void tree(int nb)
{
    int max_line = get_max_line(nb);
    int max_col = get_max_col(nb);

    if (nb > 0) {
        line_element(nb, max_col, max_line);
        trunc_element(nb, max_col);
    }
}
