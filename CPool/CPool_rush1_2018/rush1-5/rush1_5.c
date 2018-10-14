/*
** EPITECH PROJECT, 2018
** rush1-5
** File description:
** draw square
*/
void rush(int x, int y)
{
    int valid = 0;
    if ((x == 0 || y == 0) || (x < 0 || y < 0)) {
        my_print_err_string("Invalid size\n");
        valid = 1;
    }
    if ((x == 1 || y == 1) && valid != 1) {
        draw_single(x, y);
    } else if (valid != 1) {
        for (int i = 0; i < y; ++i) {
            for (int j = 0; j < x; ++j) {
                draw_ligne(x, y, i, j);
                draw_col(x, y, i, j);
            }
            my_putchar('\n');
        }
    }
}

void draw_single(int x, int y)
{
    if (x == 1 && y == 1) {
        my_putchar('B');
        my_putchar('\n');
    }
    if (x == 1 && y != 1) {
        for (int i = 0; i < y; ++i) {
            my_putchar('B');
            my_putchar('\n');
        }
    }
    if (y == 1 && x != 1) {
        for (int i = 0; i < x; ++i) {
            my_putchar('B');
        }
        my_putchar('\n');
    }
}

void draw_ligne(int x, int y, int i, int j)
{
    if (i == 0 && (j == 0 || j == x - 1))
        if (j == 0)
            my_putchar('A');
        else
            my_putchar('C');
    else if (i == 0)
        my_putchar('B');
    if (i == y - 1 && (j == 0 || j == x - 1))
        if (j == 0)
            my_putchar('C');
        else
            my_putchar('A');
    else if (i == y - 1)
        my_putchar('B');
}

void draw_col(int x, int y, int i, int j)
{

    if ((j == 0 || j == x - 1) && (i != 0 && i != y - 1))
        my_putchar('B');
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