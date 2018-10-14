/*
** EPITECH PROJECT, 2018
** my_revstr.c
** File description:
** description of the file
*/
int my_strlen1(char *str)
{
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }
    return (length);
}

char *my_revstr(char *str)
{
    int index = 0;
    int lenght = my_strlen1(str) - 1;;
    char temps;

    while (index < lenght) {
        temps = str[index];
        str[index] = str[lenght];
        str[lenght] = temps;
        index++;
        lenght--;
    }
    return (str);
}
