/*
** EPITECH PROJECT, 2022
** oct
** File description:
** prjct
*/

#include <stdarg.h>
#include "my_printf.h"

int convert_octal_short(short nb)
{
    int temp;
    int i = 1;
    int nb_octal = 0;

    while (nb != 0) {
        temp = nb % 8;
        nb /= 8;
        nb_octal += temp * i;
        i *= 10;
    }
    my_put_nbr_short(nb_octal);
}

void my_putchar_octal_argshort(va_list *ap)
{
    convert_octal_short(va_arg(*ap, int));
}
