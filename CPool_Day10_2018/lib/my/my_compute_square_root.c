/*
** EPITECH PROJECT, 2018
** my_compute_square_root
** File description:
** return all character of a string but in reverse order
*/

int my_compute_square_root(int nb)
{
    int index = 0;

    if (nb < 1)
        return (0);
    while (index * index != nb) {
        index = index + 1;
        if (index > nb)
            return (0);
    }
    return (index);
}