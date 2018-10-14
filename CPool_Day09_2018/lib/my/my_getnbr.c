/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** return a number sent to the function
*/

int my_getnbr(char *str)
{
    unsigned long nb = 0;
    int isneg = 1;
    int i = 0;
    int cpt = 0;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            isneg = -1;
        i = i + 1;
    }
    while (str[i] != '\0') {
        if (cpt > 9)
            return (0);
        if (str[i] >= '0' && str[i] <= '9') {
            nb = (nb * 10) + str[i] - '0';
            i = i + 1;
            cpt++;
        } else
            return (nb * isneg);
    }
    return (nb * isneg);
}

long power(int start, int x)
{
    int i;
    int number = 1;
    for (i = 0; i < start; ++i)
        number *= x;
    return (number);
}
