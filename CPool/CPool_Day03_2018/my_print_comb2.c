/*
** EPITECH PROJECT, 2018
** my_print_comb
** File description:
** print number composed with 3 digits
*/

int my_print_lvl2_d(void)
{
	int lvl1_d = 0;
	int lvl2_d = 1;

	while (lvl1_d < 99) {
		display_number(lvl1_d, lvl2_d);
		if (lvl1_d == 98 && lvl2_d == 99) {
			my_putchar('\n');
		} else {
			my_putchar(',');
			my_putchar(' ');
		}
		lvl2_d += 1;
		if (lvl2_d == 100) {
			lvl1_d += 1;
			lvl2_d = lvl1_d + 1;
		}
	}
}

void change_to_int(int n)
{
	char N1 = '0' + n / 10;
	char N2 = '0' + n % 10;
	my_putchar(N1);
	my_putchar(N2);
}

void display_number(int n1, int n2)
{
	change_to_int(n1);
	my_putchar(' ');
	change_to_int(n2);
}
