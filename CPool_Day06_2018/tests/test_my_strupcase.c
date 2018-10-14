/*
** EPITECH PROJECT, 2018
** test_my_strupcase
** File description:
** description of the file
*/
#include <criterion/criterion.h>

char *my_strupcase(char const *);

Test(my_strupcase,return_value_is_reversed)
{
char test1[] = "abcdef";
cr_assert_str_eq(my_strupcase(test1), "ABCDEF");

};