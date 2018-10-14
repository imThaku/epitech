/*
** EPITECH PROJECT, 2017
** my_sort_params
** File description:
** 
*/

void my_sort_params(char **tab, int size)
{
    char *temp;
    int index = 0;
    int j;

    while (index < size) {
        j = 0;
        while (j < size) {
            if (my_strcmp(tab[index], tab[j]) < 0) {
                temp = tab[index];
                tab[index] = tab[j];
                tab[j] = temp;
            }
            ++j;
        }
        ++index;
    }
}

int main(int ac, char *av[])
{
    my_sort_params(av, ac);

    int index = 0;

    while (index < ac) {
        my_putstr(av[index]);
        my_putchar('\n');
        ++index;
    }
    return (0);
}