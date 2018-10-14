/*
** EPITECH PROJECT, 2018
** my_compute_factorial_it
** File description:
** return all character of a string but in reverse order
*/
int my_compute_factorial_it(int nb)
{
    int index;
    int res;

    index = nb;
    res = 1;
    if (nb >= 13)
        return (0);
    if (nb == 0 || nb == 1)
        return (1);
    if (nb < 0)
        return (0);
    while (index > 1) {
        res = res * index;
        index--;
    }
    return (res);
}