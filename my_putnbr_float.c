/*
** EPITECH PROJECT, 2022
** my_putnbr_float
** File description:
** prjct
*/

#include <stdarg.h>
#include "my_printf.h"

void my_putnbr_float(long nb2, int i)
{
    if (nb2 < 0) {
        nb2 = nb2 * (-1);
    }
    if (i == -1 && nb2 % 10 >= 5) {
        nb2 = nb2 / 10;
        nb2 = nb2 + 1;
        i++;
    } else if (i == -1) {
        i = i + 1;
        nb2 = nb2 / 10;
    }
    if (nb2 >= 10 && i < 6 && i >= 0) {
        my_putnbr_float(nb2 / 10, i = i + 1);
        my_putchar(48 + nb2 % 10);
    }
}

void my_putnbr_float2(long nb3)
{
    if (nb3 < 0) {
        my_putchar('-');
        nb3 = nb3 * (-1);
    }
    if (nb3 >= 10)
        my_putnbr_float2(nb3 / 10);
    my_putchar(48 + nb3 % 10);
}

void my_putdouble(va_list *ap)
{
    int i = (-1);
    long nb2;
    nb2 = va_arg(*ap, double) * 10000000;
    if (nb2 == 0) {
        my_putchar('0');
        my_putchar('.');
        my_putstr("000000");
    } else {
    my_putnbr_float2(nb2 / 10000000);
    my_putchar('.');
    my_putnbr_float(nb2,i);
    }
}
