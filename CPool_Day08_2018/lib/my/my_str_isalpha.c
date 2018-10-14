/*
** EPITECH PROJECT, 2018
** my_str_isalpha
** File description:
** description of the file
*/

int my_str_isalpha(char const *str)
{
    int res = 1;
    int i = 0;
    while (str[i] != '\0') {
        if ((str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122))
            res = 1;
        else
            return (0);
        i = i + 1;
    }
    return (res);
}
