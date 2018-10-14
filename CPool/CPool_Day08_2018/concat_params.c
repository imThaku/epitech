/*
** EPITECH PROJECT, 2018
** concat_params.c
** File description:
** description of the file
*/
char *concat_params(int argc, char **argv)
{
    char *str;
    int size = size_arg(argc, argv);
    int cpt2 = 0;
    int cpt_elem = 0;
    int i = 0;

    str = (char *)malloc(size);
    while (cpt2 < argc) {
        while (argv[cpt2][cpt_elem] != '\0') {
            str[i] = argv[cpt2][cpt_elem];
            cpt_elem++;
            i++;
        }
        str[i] = '\n';
        i++;
        cpt2++;
        cpt_elem = 0;
    }
    return str;
}

int size_arg(int argc, char **argv)
{
    int cpt = 0;
    int s = 0;

    while (cpt < argc) {
        s += my_strlen(argv[cpt]);
        cpt++;
    }
    return s;
}