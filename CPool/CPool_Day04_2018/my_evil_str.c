/*
** EPITECH PROJECT, 2018
** my_evil_str
** File description:
** return all character of a string but in reverse order
*/
void my_swapchar(char *a, char *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

char *my_evil_str(char *str)
{
    int lenght;
    int index;

    lenght = my_strlen(str) - 1;
    index = 0;
    while (index < lenght / 2) {
        my_swapchar(&str[index], &str[lenght - index]);
        index++;
    }
    return (str);
}
