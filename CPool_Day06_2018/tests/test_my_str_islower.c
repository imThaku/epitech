/*
** EPITECH PROJECT, 2018
** test_my_str_islower
** File description:
** description of the file
*/
#include <criterion/criterion.h>

int my_str_islower(char const *);

Test(my_str_islower,test_if_is_in_lower_case)
{
char test1[] = "abcdef";
cr_assert_eq(my_str_islower(test1), 1);

};

Test(my_str_islower,test_if_is_not_in_lower_case)
{
char test1[] = "abAdef";
cr_assert_eq(my_str_islower(test1), 0);

};

Test(my_str_islower,test_if_value_is_null)
{
char test1[] = "";
cr_assert_eq(my_str_islower(test1), 1);

};