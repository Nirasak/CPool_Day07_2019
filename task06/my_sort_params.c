/*
** EPITECH PROJECT, 2019
** my_sort_params
** File description:
** sort params
*/

int my_putstr(char const *str);
void my_putchar(char c);
int my_strcmp(char const *s1, char const *s2);

void my_sort_params(int argc, char **argv, int count)
{
    int stock = 0;
    char *str;

    for (int i = count + 1; i < argc; i++) {
        stock = my_strcmp(argv[count], argv[i]);
        if (stock >= 1) {
            str = argv[count];
            argv[count] = argv[i];
            argv[i] = str;
            i = count + 1;
        }
    }
}

int main(int argc, char **argv)
{
    int count = 0;

    for (; count < argc; count++)
        my_sort_params(argc, argv, count);
    for (int i = 0; i < argc; i++) {
        my_putstr(argv[i]);
        my_putchar('\n');
    }
    return (0);
}
