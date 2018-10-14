/*
** EPITECH PROJECT, 2018
** my_strdup
** File description:
** description of the file
*/
char *my_strdup(char const *src)
{
    char *dest;
    int len;

    len = my_strlen(src);
    dest = malloc(len + 1);
    len = 0;
    while (src[len] != '\0') {
        dest[len] = src[len];
        len = len + 1;
    }
    dest[len] = '\0';
    return (dest);
}
