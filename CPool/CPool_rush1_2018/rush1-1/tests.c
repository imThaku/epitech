/*
** EPITECH PROJECT, 2018
** rushtest.c
** File description:
** rush tests
*/

#include "rush1_1.c"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void main()
{
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;

    while (n1 < 10) {
        rush(4, n1);
        printf("%d %d \n", 4, n1);
        n1++;
    }
    while (n2 < 10) {
        rush(n2, 4);
        printf("%d %d \n", n2, 4);

        n2++;
    }
    while (n3 < 10) {
        rush(n3, n3);
        printf("%d %d \n",n3,n3);

        n3++;
    }
}
