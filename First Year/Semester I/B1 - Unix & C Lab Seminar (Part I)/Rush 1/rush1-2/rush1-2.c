/*
** EPITECH PROJECT, 2020
** rush1-2.c
** File description:
** adrien.colombier@epitech.eu
*/

#include <unistd.h>

void print_line(int size)
{
    for (int i = 0; i < size; i++) {
        if (i == 0)
            write(1, "/", 1);
        else if (i == (size - 1))
            write(1, "\\", 1);
        else
            write(1, "*", 1);
    }
}

void print_last(int size) 
{
    for (int i = 0; i < size; i++) {
        if (i == 0)
            write(1, "\\", 1);
        else if (i == (size - 1))
            write(1, "/", 1);
        else
            write(1, "*", 1);
    }
}

void print_body(int size)
{
    for (int i = 0; i < size; i++) {
        if (i == 0 || i == (size - 1))
            write(1, "*", 1);
        else
            write(1, " ", 1);
    }
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0) {
        write(1, "Invalid size\n", 13);
        return;
    }
    for (int i = 0; i < y; i++) {
        if (i == 0)
            print_line(x);
        else if (i == (y - 1))
            print_last(x);
        else
            print_body(x);
        write(1, "\n", 1);    
    }
}