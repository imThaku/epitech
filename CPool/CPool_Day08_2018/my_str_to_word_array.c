/*
** EPITECH PROJECT, 2018
** my_str_to_word_array.c
** File description:
** description of the file
*/
int is_word(char c)
{
    if ((c >= '1' && c <= '9') || (c >= 'A' && c <= 'Z') ||
        (c >= 'a' && c <= 'z'))
        return (1);
    else
        return (0);
}

char *get_word(char const *str, int i)
{
    int j = i;
    int word_length = 0;
    char *word;

    while (is_word(str[j]) == 1) {
        word_length++;
        j++;
    }
    j = 0;
    word = malloc(word_length + 1);
    while (is_word(str[i]) == 1) {
        word[j] = str[i];
        j++;
        i++;
    }
    word[j] = '\0';
    return (word);
}

int word_counter(char const *str)
{
    int word_counter = 0;
    int first_word = 1;

    for (int i = 0; i < my_strlen(str); i++) {
        if (is_word(str[i]) == 1 && first_word == 1) {
            word_counter++;
            first_word = 0;
        }
        if (is_word(str[i]) == 0) {
            first_word = 1;
        }
    }
    return (word_counter);
}

char **my_str_to_word_array(char const *str)
{
    int pos = 0;
    char **array = malloc(sizeof(char *) * word_counter(str));

    for (int i = 0; i < my_strlen(str); i++) {
        if (is_word(str[i]) == 1) {
            array[pos] = get_word(str, i);
            i += my_strlen(get_word(str, i));
            pos++;
        }
    }
    array[pos] = 0;
    return (array);
}