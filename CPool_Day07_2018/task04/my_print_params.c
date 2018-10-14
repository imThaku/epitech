/*
** EPITECH PROJECT, 2018
** my_print_params
** File description:
** description of the file
*/
int main(int argc, char **argv)
{
    int index = 0;
    while (argv[index] != '\0') {
        my_putstr(argv[index]);
        my_putchar('\n');
        index = index + 1;
    }
    return (0);
}
