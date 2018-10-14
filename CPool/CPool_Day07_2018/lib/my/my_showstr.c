/*
** EPITECH PROJECT, 2018
** my_showstr.c
** File description:
** description of the file
*/
int my_strlen2(char *str)
{
    int len;

    len = 0;
    while (str[len] != '\0') {
        len = len + 1;
    }
    return (len);
}

int my_putnbr_base(int nb, char *base)
{
    int temps;
    int length;

    if (nb == -2147483648)
        return (nb);
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    length = my_strlen2(base);
    temps = nb % length;
    nb = nb / length;
    if (nb > 0)
        my_putnbr_base(nb, base);
    my_putchar(base[temps]);
    return (nb);
}

int my_showstr(char const *str)
{

    int index = 0;
    char base[] = "0123456789ABCDEF";

    while (str[index] != '\0') {
        if (!(str[index] >= 32 && str[index] <= 126)) {
            my_putchar('\\');
            my_putchar('0');
            my_putnbr_base(str[index], base);
        } else {
            my_putchar(str[index]);
        }
        index = index + 1;
    }
    return (0);
}
