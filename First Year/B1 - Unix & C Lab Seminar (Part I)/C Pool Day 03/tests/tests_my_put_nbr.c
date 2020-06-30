/*
** EPITECH PROJECT, 2020
** tests_my_put_nbr.c
** File description:
** adrien.colombier@epitech.eu
*/

int my_put_nbr(int nb);

int main()
{
    my_put_nbr(0);
    my_putchar('\n');
    my_put_nbr(1);
    my_putchar('\n');
    my_put_nbr(-1);
    my_putchar('\n');
    my_put_nbr(10);
    my_putchar('\n');
    my_put_nbr(-10);
    my_putchar('\n');
    my_put_nbr(128);
    my_putchar('\n');
    my_put_nbr(-189);
    my_putchar('\n');
    my_put_nbr(0x7FFFFFFF);
    my_putchar('\n');
    my_put_nbr(0x80000000);
    my_putchar('\n');
    return 0;
}
