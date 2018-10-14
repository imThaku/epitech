/*
** EPITECH PROJECT, 2018
** get_language.c
** File description:
** description of the file
*/
#include "my.h"

float get_language_eng(float nb, char *str)
{
    int index = 0;
    float res;

    char letter[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
        'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
        'z'};
    float english[27] = {8.167, 1.492, 2.782, 4.253, 12.702, 2.228, 2.015,
        6.094, 6.966, 0.153, 0.772, 4.025, 2.406, 6.749, 7.507, 1.929, 0.095,
        5.987, 6.327, 9.056, 2.758, 0.978, 2.360, 0.150, 1.974, 0.074};

    for (int i = 0; i < 27; ++i) {
        if (str[0] == letter[i])
            index = i;
    }
    float difeng = fabsoluteval(english[index] - nb);
    res = difeng;
    return res;
}

float get_language_fr(float nb, char *str)
{
    int index = 0;
    float res;

    char letter[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
        'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
        'z'};
    float french[27] = {7.636, 0.901, 3.260, 3.669, 14.715, 1.066, 0.866, 0.737,
        7.529, 0.613, 0.074, 5.456, 2.968, 7.095, 5.796, 2.521, 1.362, 6.693,
        7.948, 7.244, 6.311, 1.838, 0.049, 0.427, 0.128, 0.326};

    for (int i = 0; i < 27; ++i) {
        if (str[0] == letter[i])
            index = i;
    }

    float diffr = fabsoluteval(french[index] - nb);
    res = diffr;
    return res;
}

float get_language_ger(float nb, char *str)
{
    int index = 0;
    float res;

    char letter[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
        'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
        'z'};
    float german[27] = {6.516, 1.886, 2.732, 5.076, 16.396, 1.656, 3.009, 4.577,
        6.550, 0.268, 1.417, 3.437, 2.534, 9.776, 2.594, 0.670, 0.018, 7.003,
        7.270, 6.154, 4.166, 0.846, 1.921, 0.034, 0.039, 1.134};

    for (int i = 0; i < 27; ++i) {
        if (str[0] == letter[i])
            index = i;
    }

    float difgr = fabsoluteval(german[index] - nb);
    res = difgr;
    return res;
}

float get_language_spa(float nb, char *str)
{
    int index = 0;
    float res;

    char letter[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
        'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
        'z'};
    float spanish[27] = {11.525, 2.215, 4.019, 5.010, 12.181, 0.692, 1.768,
        0.703, 6.247, 0.493, 0.011, 4.967, 3.157, 6.712, 8.683, 2.510, 0.877,
        6.871, 7.977, 4.632, 2.927, 1.138, 0.017, 0.215, 1.008, 0.467};

    for (int i = 0; i < 27; ++i) {
        if (str[0] == letter[i])
            index = i;
    }

    float difsp = fabsoluteval(spanish[index] - nb);
    res = difsp;
    return res;
}