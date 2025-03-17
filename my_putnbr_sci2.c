/*
** EPITECH PROJECT, 2022
** my_putnbr_float
** File description:
** prjct
*/

#include <stdio.h>
#include "my_printf.h"
#include <stdarg.h>

void my_putnbr_sci_neg(unsigned long long nb2, int i)
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
        my_putnbr_sci_neg(nb2 / 10, i = i + 1);
        my_putchar(48 + nb2 % 10);
    }
}

void my_putnbr_sci(unsigned long long nb3)
{
    while (nb3 > 10)
        nb3 = nb3 / 10;
    my_putchar(nb3 +'0');
}

void condition_neg(unsigned long long nb2, int i, int e)
{
    if (nb2 == 0) {
        my_putchar('0');
        my_putchar('.');
        my_putstr("000000");
    } else {
        my_putnbr_sci(nb2);
        my_putstr(".");
        my_putnbr_sci_neg(nb2, i);
        my_putchar('e');
        my_putchar('-');
    if (e < 10)
        my_putchar('0');
    my_put_nbr(e);
    }
}

void my_putsci_neg(double nb_float)
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
    condition_neg(nb2, i, e);
}
