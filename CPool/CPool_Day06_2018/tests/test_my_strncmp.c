/*
** EPITECH PROJECT, 2018
** test_my_strstr
** File description:
** description of the file
*/
#include <criterion/criterion.h>

int my_strncmp(char const *, char const *, int);

Test(my_strncmp,return_value_is_reversed)
{
char test1[] = "abcdef";
char test2[] = "ABCDEF";
cr_assert_eq(my_strncmp(test1,test2,4), 1);

};