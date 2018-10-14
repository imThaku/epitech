/*
** EPITECH PROJECT, 2018
** my_strncmp.c
** File description:
** description of the file
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (s1[i] != '\0' || s1[i] != n) {
        if (s1[i] < s2[i])
            return (-1);
        else if (s1[i] > s2[i])
            return (1);
        i++;
    }
    return (0);
}
