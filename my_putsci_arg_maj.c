/*
** EPITECH PROJECT, 2022
** flagemaj
** File description:
** prjct
*/
#include "my_printf.h"
#include <stdarg.h>

void condition_neg_maj(unsigned long long nb2, int i, int e)
{
    if (nb2 == 0) {
        my_putchar('0');
        my_putchar('.');
        my_putstr("000000");
    } else {
        my_putnbr_sci(nb2);
        my_putstr(".");
        my_putnbr_sci_neg(nb2, i);
        my_putchar('E');
        my_putchar('-');
    if (e < 10)
        my_putchar('0');
    my_put_nbr(e);
    }
}

void condition_pos_maj(long nb2, long diviseur, int e, int compteur)
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
        my_putchar('E');
        my_putchar('+');
    if (e < 10)
        my_putchar('0');
        my_put_nbr(e);
    }
}

void my_putsci_neg_maj(double nb_float)
{
    unsigned long long int multiplicateur = 100000000;
    int i = (-1);
    unsigned long long nb2;
    int e = 0;
    long diviseur = 100000000;
    double compteur = 1;
    if (nb_float < 0) {
        nb_float = nb_float * (-1);
        my_putchar('-');
    }
    while (nb_float < compteur / 10) {
        multiplicateur = multiplicateur * 10;
        compteur = compteur / 10;
        e++;
    }
    e = e + 1;
    nb2 = nb_float * multiplicateur;
    condition_neg_maj(nb2, i, e);
}

void my_putsci_pos_maj(double nb_float)
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
    condition_pos_maj(nb2, diviseur, e, compteur);
}

void my_putsci_arg_maj(va_list *ap)
{
    double nb_float = va_arg(*ap, double);
    if (nb_float < (-1) || nb_float > 1)
        my_putsci_pos_maj(nb_float);
    else {
        my_putsci_neg_maj(nb_float);
    }
}
