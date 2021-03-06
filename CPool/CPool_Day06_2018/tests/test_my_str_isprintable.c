/*
** EPITECH PROJECT, 2018
** test_my_str_isupper
** File description:
** description of the file
*/
#include <criterion/criterion.h>

int my_str_isprintable(char const *);

Test(my_str_isprintable,test_if_is_in_printable)
{
char test1[] = "abcdef";
cr_assert_eq(my_str_isprintable(test1), 1);

};

Test(my_str_isprintable,test_if_is_not_printable)
{
char test1[] = "\n";
cr_assert_eq(my_str_isprintable(test1), 0);

};

Test(my_str_isprintable,test_if_value_is_null)
{
char test1[] = "";
cr_assert_eq(my_str_isprintable(test1), 1);

};