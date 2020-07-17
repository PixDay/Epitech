/*
** EPITECH PROJECT, 2020
** my_opp.h
** File description:
** adrien.colombier@epitech.eu
*/

#pragma once

struct operator {
    char *symbol;
    int (*function)(int, int);
};

int my_add(int left, int right);
int my_sub(int left, int right);
int my_mul(int left, int right);
int my_div(int left, int right);
int my_mod(int left, int right);
int my_usage(int left, int right);