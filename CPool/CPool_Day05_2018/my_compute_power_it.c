/*
** EPITECH PROJECT, 2018
** my_compute_power_it
** File description:
** return all character of a string but in reverse order
*/
int my_compute_power_it(int nb, int p)
{
    if (p < 0)
        return (0);
    int i;
    int number = 1;
    for (i = 0; i < p; ++i)
        number *= nb;
    return (number);
}
