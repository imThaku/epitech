/*
** EPITECH PROJECT, 2018
** my_str_isnum.c
** File description:
** description of the file
*/

int my_str_isnum(char const *str)
{
    int index = 0;

    while (str[index] != '\0') {
        if (!(str[index] >= 48 && str[index] <= 57)) {
            return (0);
        }
        index = index + 1;
    }
    return (1);
}
