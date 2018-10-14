/*
** EPITECH PROJECT, 2018
** test_my_strstr
** File description:
** description of the file
*/
#include <criterion/criterion.h>

char *my_strstr(char *, char *);

Test(my_strstr,return_value_is_reversed)
{
char test1[] = "HelloWord";
char test2[] = "Word";
cr_assert_str_eq(my_strstr(test1,test2), "Word");

};