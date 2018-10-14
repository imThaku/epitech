/*
** EPITECH PROJECT, 2018
** test_my_putnbr_base
** File description:
** description of the file
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>


int my_putnbr_base(int ,char *);

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(redirect, test_10_in_base_exa, .init = redirect_all_std) {
    char test[] = "0123456789ABCDEF";
    my_putnbr_base(10,test);
    fflush(stdout);

    cr_assert_stdout_eq_str("A");
}
