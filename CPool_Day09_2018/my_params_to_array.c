/*
** EPITECH PROJECT, 2018
** my_params_to_array
** File description:
** description of the file
*/
struct info_param *my_params_to_array(int ac, char **av)
{
    int index;
    struct info_param *av_info;
    av_info = malloc(sizeof(struct info_param) * (ac + 1));
    for (index = 0; index < ac; index++) {
        av_info[index].length = my_strlen(av[index]);
        av_info[index].str = av[index];
        av_info[index].copy = my_strdup(av[index]);
        av_info[index].word_array = my_str_to_word_array(av[index]);
    }
    return av_info;
}