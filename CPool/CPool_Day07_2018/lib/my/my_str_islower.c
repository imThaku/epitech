/*
** EPITECH PROJECT, 2018
** my_str_islower.c
** File description:
** description of the file
*/

int my_str_islower(char const *str)
{
    int index = 0;

    while (str[index] != '\0') {
        if (!(str[index] >= 97 && str[index] <= 122)) {
            return (0);
        }
        index = index + 1;
    }
    return (1);
}
