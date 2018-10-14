/*
** EPITECH PROJECT, 2018
** my_strcapitalize.c
** File description:
** description of the file
*/

char *my_strcapitalize(char *str)
{
    int index = 1;
    int test = 0;
    if ('a' <= str[0] <= 'z') {
        str[0] = str[0] - 32;
    }
    while (str[index] != '\0') {
        if (end_word1(str, index) == 1 || end_word2(str, index) == 1) {
            if (str[index] >= 'a' && str[index] <= 'z')
                str[index] = str[index] - 32;
        } else if (str[index] >= 'A' && str[index] <= 'Z')
            str[index] = str[index] + 32;

        index = index + 1;
    }
    return (str);
}

int end_word1(char *str, int index)
{
    if (str[index - 1] >= ' ' && str[index - 1] <= '/')
        return 1;
    else
        return 0;
}

int end_word2(char *str, int index)
{
    if (str[index - 1] >= ':' && str[index - 1] <= '@')
        return 1;
    else
        return 0;
}