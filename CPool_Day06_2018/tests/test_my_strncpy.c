/*
** EPITECH PROJECT, 2018
** my_strcpy_test.c
** File description:
** description of the file
*/
#include <criterion/criterion.h>

char * my_strncpy(char *, char *, int);

Test(my_strncpy,copy_five_characters_in_empty_array)
{
char dest[6] =  {0};

char * copy = my_strncpy(dest, "HelloWorld",5);
printf("%s\n", copy);
cr_assert_str_eq(copy, "Hello");

};