/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** display one by one the charactere of a string
*/

int my_putstr(char const *str)
{
    while (*str != '\0') {
        my_putchar(*str);
        str++;
    }
    return (0);
}
