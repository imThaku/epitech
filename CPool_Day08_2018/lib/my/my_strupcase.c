/*
** EPITECH PROJECT, 2018
** my_strupcase.c
** File description:
** description of the file
*/

char *my_strupcase(char *str)
{
    int index = 0;

    while (*str != '\0') {
        if (97 <= *str && *str <= 122) {
            *str = *str - 32;
        }
        index = index + 1;
        str = str + 1;
    }

    str = str - index;
    return (str);
}
