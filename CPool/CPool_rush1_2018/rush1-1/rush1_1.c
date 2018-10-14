/*
** EPITECH PROJECT, 2018
** rush1-1
** File description:
** draw square
*/

void rush(int x, int y)
{
    if ((x == 0 || y == 0) || (x < 0 || y < 0)) {
        my_print_err_string("Invalid size\n");
    } else {
        for (int i = 0; i < y; ++i) {
            for (int j = 0; j < x; ++j) {
                draw_ligne(x, y, i, j);
                draw_col(x, y, i, j);
            }
            my_putchar('\n');
        }
    }
}

void draw_ligne(int x, int y, int i, int j)
{
    if ((i == 0 || i == y - 1) && (j == 0 || j == x - 1))
        my_putchar('o');
    else if (i == 0 || i == y - 1)
        my_putchar('-');
}

void draw_col(int x, int y, int i, int j)
{

    if ((j == 0 || j == x - 1) && (i != 0 && i != y - 1))
        my_putchar('|');
    else if (i != 0 && i != y - 1)
        my_putchar(' ');
}

int my_print_err_string(char const *str)
{
    char *buffer;

    for (buffer = str; *buffer != '\0'; buffer++) {
        write(2, buffer, 1);
    }
    return (0);
}