/*
** EPITECH PROJECT, 2018
** my_strncat.c
** File description:
** description of the file
*/

char *my_strncat(char *dest, char *src, int nb)
{
    int dest_length;
    int index;

    dest_length = my_strlen(dest);
    index = 0;
    while (src[index] != '\0' && index < nb) {
        dest[dest_length + index] = src[index];
        index = index + 1;
    }
    dest[dest_length + index] = '\0';
    return (dest);
}
