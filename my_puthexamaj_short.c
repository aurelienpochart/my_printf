/*
** EPITECH PROJECT, 2022
** short
** File description:
** prct
*/

#include <stdarg.h>
#include "my_printf.h"

int verif_first2_short(short nb)
{
    if (nb % 16 <= 9)
        my_putchar(48 + nb % 16);
    if (nb % 16 == 10)
        my_putchar('A');
    if (nb % 16 == 11)
        my_putchar('B');
    if (nb % 16 == 12)
        my_putchar('C');
    if (nb % 16 == 13)
        my_putchar('D');
    if (nb % 16 == 14)
        my_putchar('E');
    if (nb % 16 == 15)
        my_putchar('F');
}

int my_put_nbr_hexamaj_short(short nb)
{
    if (nb >= 16) {
        my_put_nbr_hexamaj_short(nb / 16);
        if (nb % 16 <= 9)
            my_putchar(48 + nb % 16);
        if (nb % 16 == 10)
            my_putchar('A');
        if (nb % 16 == 11)
            my_putchar('B');
        if (nb % 16 == 12)
            my_putchar('C');
        if (nb % 16 == 13)
            my_putchar('D');
        if (nb % 16 == 14)
            my_putchar('E');
        if (nb % 16 == 15)
            my_putchar('F');
    } else {
        verif_first2_short(nb);
    }
}

void my_puthexamaj_argshort(va_list *ap)
{
    my_put_nbr_hexamaj_short(va_arg(*ap,int));
}
