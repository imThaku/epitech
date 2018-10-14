/*
** EPITECH PROJECT, 2018
** my_str_isupper.c
** File description:
** description of the file
*/

int my_str_isupper(char const *str)
{
    int index = 0;

    while (str[index] != '\0') {
        if (!(str[index] >= 65 && str[index] <= 90)) {
            return (0);
        }
        index = index + 1;
    }
    return (1);
}
