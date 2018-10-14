/*
** EPITECH PROJECT, 2018
** test_my_strcapitalize
** File description:
** description of the file
*/
#include <criterion/criterion.h>

char *my_strcapitalize(char *);

Test(my_strcapitalize,return_value_is_reversed)
{
char test1[] = "hey, how are you? 42WORds forty-two; fifty+one";
char rep[] =  "Hey, How Are You? 42words Forty-Two; Fifty+One";


cr_assert_str_eq(my_strcapitalize(test1), rep);

};