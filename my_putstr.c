/*
** EPITECH PROJECT, 2022
** my_putstr
** File description:
** task02
*/
void my_putchar (char c);

int my_putstr(char const *str)
{
    int n = 0;
    while (str[n] != '\0') {
        my_putchar(str[n]);
        n++;
    }
}
