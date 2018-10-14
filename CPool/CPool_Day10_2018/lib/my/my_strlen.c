/*
** EPITECH PROJECT, 2018
** my_strlen
** File description:
** return the length of a string
*/

int my_strlen(char const *str)
{
    int index = 0;
    while (*str != '\0') {
        str++;
        index++;
    }
    return (index);
}
