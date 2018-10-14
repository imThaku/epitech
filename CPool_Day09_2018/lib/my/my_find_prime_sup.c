/*
** EPITECH PROJECT, 2018
** my_find_prime_sup
** File description:
** Returns the smallest prime number
*/

int my_find_prime_sup(int nb)
{
    if (nb < -2147483648 || nb > 2147483647) {
        return (0);
    }
    while (!(my_is_prime(nb))) {
        nb += 1;
    }
    return nb;
}

