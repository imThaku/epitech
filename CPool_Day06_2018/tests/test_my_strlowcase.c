/*
** EPITECH PROJECT, 2018
** test_my_strlowcase
** File description:
** description of the file
*/
#include <criterion/criterion.h>

char *my_strlowcase(char const *);

Test(my_strlowcase,return_value_is_reversed)
{
char test1[] = "ABCDEF";
cr_assert_str_eq(my_strlowcase(test1), "abcdef");

};