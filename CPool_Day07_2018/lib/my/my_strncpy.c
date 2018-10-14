/*
** EPITECH PROJECT, 2018
** my_strncpy.c
** File description:
** description of the file
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int count = 0;
    int len_dest = my_strlen(dest);

    while ((count < n) && src[count]) {
        dest[count] = src[count];
        count++;
    }
    if (len_dest < n) {
        dest[count] = '\0';
    }
    return (dest);
}