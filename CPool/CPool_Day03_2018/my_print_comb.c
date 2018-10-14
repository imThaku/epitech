/*
** EPITECH PROJECT, 2018
** my_print_comb
** File description:
** print number composed with 3 digits
*/

int my_print_comb(void)
{
	char c = '0';
	char d = '1';
	char u = '2';
	while (c < '7') {
		if (u > '9') {
			d++;
			u = d + 1;
		};
		if (d > '8') {
			c++;
			d = c + 1;
		};
		if (u > '9')
			u = d + 1;
		printdigits(c, d, u);
		u++;
	}
}

void printdigits(d1, d2, d3)
{
	my_putchar(d1);
	my_putchar(d2);
	my_putchar(d3);
	if (!((d1 == '7') && (d2 == '8') && (d3 == '9'))) {
		my_putchar(44);
	} else {
		my_putchar(32);
	}
}
