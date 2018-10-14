/*
** EPITECH PROJECT, 2018
** my_compute_factorial_rec
** File description:
** return all character of a string but in reverse order
*/
int my_compute_factorial_rec(int nb)
{
    int index;
    int res;

    index = nb;
    if (nb >= 13)
        return (0);
    if (res <= 1)
        res = 1;
    if (nb < 0)
        return (0);
    if (index == 0 || index == 1)
        return (1);
    res = index * my_compute_factorial_rec(index - 1);
    return (res);
}