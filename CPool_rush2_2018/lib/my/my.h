/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** description of the file
*/

#ifndef MY_H_
#define MY_H_

void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_compute_power_rec(int nb, int power);
int my_print_err_string(char *str);


float get_language_eng(float,char*);
float get_language_fr(float,char*);
float get_language_ger(float,char*);
float get_language_spa(float,char*);
void ftoa(float n, char *res, int afterpoint);
char convert_letter(char letter);
int get_number_letter(char *str);
void reverse(char *str, int len);
int intToStr(int x, char str[], int d);
float frequencies(int length, int occurences);
int occurences(char* str, char *patern);
void displaylang(float sumeng, float sumfr, float sumger, float sumspa);
void diplay_occurences(char **argv, float frequences, int cpt);
int my_compute_power_rec(int nb, int p);
float fabsoluteval(float val);

#endif /* MY_H_ */
