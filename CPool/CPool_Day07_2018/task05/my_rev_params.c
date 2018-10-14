/*
** EPITECH PROJECT, 2018
** my_rev_params
** File description:
** description of the file
*/

int main(int argc, char **argv)
{
    int index = 0;

    while (argv[index] != '\0') {
        index = index + 1;
    }
    while (index != 0) {
        index = index - 1;
        my_putstr(argv[index]);
        my_putchar('\n');
    }

    return (0);
}
