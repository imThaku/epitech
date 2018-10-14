/*
** EPITECH PROJECT, 2018
** rush2.c
** File description:
** description of the file
*/
#include "my.h"

float frequencies(int length, int occurences)
{
    float nbr = ((float)occurences / (float)length) * 100;
    return nbr;
}

int occurences(char *str, char *patern)
{
    int length = my_strlen(str);
    int occ = 0;
    char seconde_case = convert_letter(patern[0]);
    for (int i = 0; i < length; ++i) {
        if (str[i] == patern[0] || str[i] == seconde_case)
            occ++;
    }
    return occ;
}

void displaylang(float sumeng, float sumfr, float sumger, float sumspa)
{
    char *res = "English";
    char *text = "=> ";
    float sumt = sumeng;
    if (sumfr < sumt) {
        sumt = sumfr;
        res = "French";
    }
    if (sumger < sumt) {
        sumt = sumger;
        res = "German";
    }
    if (sumspa < sumt) {
        sumt = sumspa;
        res = "Spanish";
    }
    my_putstr(text);
    my_putstr(res);
    my_putchar('\n');
}

void diplay_occurences(char **argv, float frequences, int cpt)
{
    my_putstr(argv[cpt]);
    my_putchar(':');
    char rep1[10];
    intToStr(occurences(argv[1],argv[cpt]),rep1,0);
    my_putstr(rep1);
    my_putchar(' ');
    my_putchar('(');
    char res[20];
    ftoa(frequences, res, 2);
    my_putstr(res);
    my_putchar('%');
    my_putchar(')');
    my_putchar('\n');
}

int main(int argc, char **argv)
{
    if (argc < 3){
        my_print_err_string("Need more arguments");
    }else {
        int cpt = 2;
        int nb_letter = get_number_letter(argv[1]);
        float sumeng = 0.0;
        float sumfr = 0.0;
        float sumger = 0.0;
        float sumspa = 0.0;
        while (cpt < argc) {
            float test = frequencies(nb_letter, occurences(argv[1], argv[cpt]));
            sumeng = sumeng + get_language_eng(test, argv[cpt]);
            sumfr = sumfr + get_language_fr(test, argv[cpt]);
            sumger = sumger + get_language_ger(test, argv[cpt]);
            sumspa = sumspa + get_language_spa(test, argv[cpt]);
            diplay_occurences(argv, test, cpt);
            cpt++;
        }
        displaylang(sumeng, sumfr, sumger, sumspa);
        return 0;
    }
}