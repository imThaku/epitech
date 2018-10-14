/*
** EPITECH PROJECT, 2018
** my_strcpy_test.c
** File description:
** description of the file
*/
int my_strlen(char *str)
{
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }
    return (length);
}

char *my_strstr(char *str, char *to_find)
{
    char *mychar = str;
    char index = 0;
    char length = my_strlen(to_find);

    while (*mychar != '\0') {
        if (*mychar == to_find[index]) {
            if ((index + 1) == length)
                return (mychar - index);
            index = index + 1;
        } else
            index = 0;
        mychar = mychar + 1;
    }
    return (0);
}
