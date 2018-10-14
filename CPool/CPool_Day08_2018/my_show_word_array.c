/*
** EPITECH PROJECT, 2018
** my_show_word_array.c
** File description:
** description of the file
*/
int my_show_word_array(char *const *tab)
{
    int index = 0;

    while (tab[index] != 0) {
        my_putstr(tab[index]);
        my_putchar('\n');
        index = index + 1;
    }
    return (0);
}
