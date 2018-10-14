/*
** EPITECH PROJECT, 2018
** test_my_str_isnum
** File description:
** description of the file
*/
#include <criterion/criterion.h>

int my_str_isnum(char const *);

Test(my_str_isnum,test_if_is_digits)
{
    char test1[] = "123456";
    cr_assert_eq(my_str_isnum(test1), 1);

};

Test(my_str_isnum,test_if_is_not_digit)
{
    char test1[] = "12a456";
    cr_assert_eq(my_str_isnum(test1), 0);

};

Test(my_str_isnum,test_if_value_is_null)
{
    char test1[] = "";
    cr_assert_eq(my_str_isnum(test1), 1);

};