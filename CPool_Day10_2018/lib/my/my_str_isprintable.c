/*
** EPITECH PROJECT, 2018
** my_str_isprintable.c
** File description:
** description of the file
*/

int my_str_isprintable(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (!(str[i] >= 32 && str[i] <= 126)) {
            return (0);
        }
        i = i + 1;
    }
    return (1);
}
