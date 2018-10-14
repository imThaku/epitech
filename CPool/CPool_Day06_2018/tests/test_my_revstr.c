/*
** EPITECH PROJECT, 2018
** my_strcpy_test.c
** File description:
** description of the file
*/
#include <criterion/criterion.h>

char* my_revstr(char *);

Test(my_revstr,return_value_is_reversed)
{
char test[] = "Hello";
cr_assert_str_eq(my_revstr(test), "olleH");

};