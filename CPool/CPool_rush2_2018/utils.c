/*
** EPITECH PROJECT, 2018
** utils.c
** File description:
** description of the file
*/
#include <unistd.h>
#include "my.h"

int get_number_letter(char *str)
{
    int cpt = 0;
    while (*str != '\0') {
        if ((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122)) {
            cpt++;
        }
        str++;
    }
    return (cpt);
}

int my_compute_power_rec(int nb, int p)
{
    int temp = nb;
    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    temp = nb * my_compute_power_rec(nb, p - 1);
    return (temp);
}

char convert_letter(char letter)
{
    char tmp = letter;
    if (letter >= 'A' && letter <= 'Z')
        tmp = (char)(letter + 32);
    else if (letter >= 'a' && letter <= 'z')
        tmp = (char)(letter -32);
    return tmp;
}

float fabsoluteval(float val)
{
    if (val >= 0)
        return val;
    else
        return -val;
}

int my_print_err_string(char *str)
{
    char *buffer;

    for (buffer = str; *buffer != '\0'; buffer++) {
        write(2, buffer, 1);
    }
    return 84;
}