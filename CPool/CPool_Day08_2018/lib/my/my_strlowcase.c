/*
** EPITECH PROJECT, 2018
** my_strlowcase.c
** File description:
** description of the file
*/

char *my_strlowcase(char *str)
{
    int index = 0;

    while (*str != '\0') {
        if (65 <= *str && *str <= 90) {
            *str = *str + 32;
        }
        index = index + 1;
        str = str + 1;
    }
    str = str - index;
    return (str);
}
