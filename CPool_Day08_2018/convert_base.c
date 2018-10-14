/*
** EPITECH PROJECT, 2018
** convert_base.c
** File description:
** description of the file
*/
int my_getnbr_base(char *str, char *base)
{
    int index;
    int b;
    int nbr = 0;
    int multi = 1;
    int signe = 1;

    if (str[0] == '-') {
        signe = signe * -1;
        str = &str[1];
    }
    index = my_strlen(str) - 1;
    while (index >= 0) {
        b = 0;
        while (str[index] != base[b])
            b = b + 1;
        nbr = nbr + b * multi;
        multi = multi * my_strlen(base);
        index--;
    }
    return (nbr * signe);
}

char *convert_base(char const *nbr, char const *base_from, char const *base_to)
{
    char *res;
    int index = 0;
    int lenght;
    int dec_nb;

    res = malloc(200);
    dec_nb = my_getnbr_base(nbr, base_from);
    lenght = my_strlen(base_to);
    while (dec_nb > 0) {
        res[index] = base_to[dec_nb % lenght];
        dec_nb = dec_nb / lenght;
        index = index + 1;
    }
    my_revstr(res);
    return (res);
}