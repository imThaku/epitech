/*
** EPITECH PROJECT, 2018
** my_sort_in_array
** File description:
** sort an integer array in ascending order
*/

void my_sort_int_array(int *tab, int size)
{
    int i;
    int issort = 0;
    int nb = 0;

    while (issort == 0) {
        i = 0;
        issort = 1;
        while ((i + 1) < size) {
            if (tab[i] > tab[i + 1]) {
                issort = 0;
                my_swap(&tab[i], &tab[i + 1]);
            }
            i = i + 1;
        }
        nb = nb + 1;
    }
}
