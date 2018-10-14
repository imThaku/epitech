/*
** EPITECH PROJECT, 2018
** test_my_str_isupper
** File description:
** description of the file
*/
#include <criterion/criterion.h>

int my_str_isupper(char const *);

Test(my_str_isupper,test_if_is_in_upper_case)
{
char test1[] = "ABCDEF";
cr_assert_eq(my_str_isupper(test1), 1);

};

Test(my_str_isupper,test_if_is_not_in_upper_case)
{
char test1[] = "ABcDEF";
cr_assert_eq(my_str_isupper(test1), 0);

};

Test(my_str_isupper,test_if_value_is_null)
{
char test1[] = "";
cr_assert_eq(my_str_isupper(test1), 1);

};