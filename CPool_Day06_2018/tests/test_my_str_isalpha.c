/*
** EPITECH PROJECT, 2018
** test_my_str_isalpha
** File description:
** description of the file
*/
#include <criterion/criterion.h>

int my_str_isalpha(char const *);

Test(my_str_isalpha,test_if_is_alpha)
{
char test1[] = "abcdef";
cr_assert_eq(my_str_isalpha(test1), 1);

};

Test(my_str_isalpha,test_if_is_not_alpha)
{
char test1[] = "ab4def";
cr_assert_eq(my_str_isalpha(test1), 0);

};

Test(my_str_isalpha,test_if_value_is_null)
{
char test1[] = "";
cr_assert_eq(my_str_isalpha(test1), 1);

};