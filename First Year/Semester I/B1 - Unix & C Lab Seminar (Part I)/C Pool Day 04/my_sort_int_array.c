/*
** EPITECH PROJECT, 2020
** my_sort_int_array.c
** File description:
** adrien.colombier@epitech.eu
*/

void my_sort_int_array(int *array, int size)
{
    int idx = 1;
    int tmp;

    while (idx < size) {
        if (array[idx] < array[idx - 1]) {
            tmp = array[idx];
            array[idx] = array[idx - 1];
            array[idx - 1] = tmp;
            idx -= 2;
        }
        idx++;
        idx = (idx < 1) ? 1 : idx;
    }
}