/*
** EPITECH PROJECT, 2018
** my_showstr.c
** File description:
** description of the file
*/
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
