/*
** EPITECH PROJECT, 2018
** my_swap
** File description:
** swap to character
*/

void my_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
