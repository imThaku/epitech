/*
** EPITECH PROJECT, 2018
** test_my_putnbr_base
** File description:
** description of the file
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>


int my_showstr(char *);
int my_putnbr_base(int ,char *);

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(redirect, test_10_in_base_exa, .init = redirect_all_std) {
    char str[] = "I like \n ponies!";
    my_showstr(str);
    fflush(stdout);

    cr_assert_stdout_eq_str("I like \\0a ponies!");
}
