/*
** EPITECH PROJECT, 2018
** tree
** File description:
** A function that displays a fir tree, based on its given size
*/

void print_line_char(char c, int n)
{
    while (n--)
        my_putchar(c);
}

int get_size(int x)
{

    int floor_size = 0;

    if (x == 0)
        return (1);
    floor_size = (get_size(x - 1) - (2 * (x / 2)) + (4 + 2 * x));

    return (floor_size);
}

void draw_trunk(int size)
{
    int trunk_size;
    int offset_size;

    trunk_size = size - size % 2 + 1;
    offset_size = (get_size(size) - trunk_size) / 2;
    while (size--) {
        print_line_char(' ', offset_size);
        print_line_char('|', trunk_size);
        my_putchar('\n');
    }
}

void draw_lines(int etage, int offset)
{
    int height;
    int max_width;
    height = 3 + etage;
    max_width = get_size(etage);
    while (height--) {
        print_line_char(' ', offset + height);
        print_line_char('*', max_width - (2 * height));
        my_putchar('\n');
    }
}

void tree(int size)
{
    int i;

    if (size > 0) {
        i = 0;
        while (size - i) {
            i++;
            draw_lines(i, (get_size(size) - get_size(i)) / 2);
        }
        draw_trunk(size);
    }
}