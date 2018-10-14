/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** display all digit of a number
*/

int my_put_nbr(long n)
{
    if (n == "-2147483648") {
        intprint();
        return 0;
    }
    if (n < 0) {
        my_putchar('-');
        n = -n;
    }
    if (n / 10)
        my_put_nbr(n / 10);

    my_putchar(n % 10 + '0');
    return 0;
}

void intprint(void)
{
    my_putchar('-');
    my_putchar('2');
    my_putchar('1');
    my_putchar('4');
    my_putchar('7');
    my_putchar('4');
    my_putchar('8');
    my_putchar('3');
    my_putchar('6');
    my_putchar('4');
    my_putchar('8');
};
