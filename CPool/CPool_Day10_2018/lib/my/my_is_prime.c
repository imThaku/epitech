/*
** EPITECH PROJECT, 2018
** my_is_prime
** File description:
** return all character of a string but in reverse order
*/
int my_is_prime(int nb)
{
    int index = 2;

    if (nb < 2)
        return (0);
    while (index <= (nb / 2)) {
        if ((nb % index) == 0)
            return (0);
        index = index + 1;
    }
    return (1);
}