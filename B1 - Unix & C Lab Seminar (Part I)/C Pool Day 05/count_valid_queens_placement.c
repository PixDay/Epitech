/*
** EPITECH PROJECT, 2020
** count_valid_queens_placement.c
** File description:
** adrien.colombier@epitech.eu
*/

int board_different(int *chess, int nb)
{
    int i = 0;
    int j = 1;

    while (i != (nb - 1)) {
        if (chess[j] == chess[i])
            return 0;
        j++;
        if (j == nb) {
            i++;
            j = i + 1;
        }
    }
    return 1;
}

int left_to_right(int *chess, int nb)
{
    int i = 0;
    int j = 1;

    while (i != nb && j != nb) {
        if ((i + chess[j]) == (j + chess[i]))
            return 0;
        j++;
        if (j == nb) {
            i++;
            j = i + 1;
        }
    }
    return 1;
}

int right_to_left(int *chess, int nb)
{
    int i = 0;
    int j = 1;

    while (i != nb && j != nb) {
        if ((i - chess[j]) == (j - chess[i]))
            return 0;
        j++;
        if (j == nb) {
            i++;
            j = i + 1;
        }
    }
    return 1;
}

int create_possibilities(int *chess, int nb, int rec, int poss)
{
    int i = 0;

    if (rec != (nb + 1)) {
        for (i = 0; i != nb; i++) {
            chess[rec] = i;
            poss = create_possibilities(chess, nb, (rec + 1), poss);
        }
    }
    if (rec == nb) {
        if (board_different(chess, nb) == 1 &&
            left_to_right(chess, nb) == 1 &&
            right_to_left(chess, nb) == 1) {
            poss += 1;
        }
    }
    return poss;
}

int count_valid_queens_placements(int nb)
{
    int poss = 0;
    int rec = 0;
    int chess[nb];

    poss = create_possibilities(chess, nb, rec, poss);
    return poss;
}