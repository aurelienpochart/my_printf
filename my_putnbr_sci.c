/*
** EPITECH PROJECT, 2022
** my_putnbr_float
** File description:
** prjct
*/

#include <stdio.h>
#include "my_printf.h"
#include <stdarg.h>

void my_putnbr_sci_pos(long nb2, int i)
{
    if (i == -1 && nb2 % 10 >= 5) {
        nb2 = nb2 / 10;
        nb2 = nb2 + 1;
        i++;
    } else if (i == -1) {
        i = i + 1;
        nb2 = nb2 / 10;
    }
    if (nb2 >= 10 && i < 7 && i >= 0) {
        my_putnbr_sci_pos(nb2 / 10, i = i + 1);
        my_putchar(48 + nb2 % 10);
    }
}

void my_putnbr_sci2(long nb3)
{
    if (nb3 >= 10)
        my_putnbr_sci2(nb3 / 10);
    my_putchar(48 + nb3 % 10);
}

void condition_pos(long nb2, long diviseur, int e, int compteur)
{
    int i = (-1);
    if (nb2 == 0) {
        my_putchar('0');
        my_putchar('.');
        my_putstr("000000");
    } else {
        my_putnbr_sci2(nb2 / diviseur);
        my_putchar('.');
        my_putnbr_sci_pos(nb2 / compteur, i);
        my_putchar('e');
        my_putchar('+');
    if (e < 10)
        my_putchar('0');
        my_put_nbr(e);
    }
}

void my_putsci_pos(double nb_float)
{
    long nb2; int e = 0;
    long diviseur = 100000000;
    int compteur = 10;
    if (nb_float < 0) {
        nb_float = nb_float * (-1);
        my_putchar('-');
    }
    while (nb_float > compteur * 10) {
        diviseur = diviseur * 10;
        compteur = compteur * 10;
        e++;
    }
    e = e + 1;
    nb2 = nb_float * 10000000;
    condition_pos(nb2, diviseur, e, compteur);
}

void my_putsci_arg(va_list *ap)
{
    double nb_float = va_arg(*ap, double);
    if (nb_float < (-1) || nb_float > 1)
        my_putsci_pos(nb_float);
    else {
        my_putsci_neg(nb_float);
    }
}
