/*
** EPITECH PROJECT, 2022
** short
** File description:
** prjct
*/

#include <stdio.h>
#include "my_printf.h"
#include <stdarg.h>

int verif_firstshort(short nb)
{
    if (nb % 16 <= 9)
        my_putchar(48 + nb % 16);
    if (nb % 16 == 10)
        my_putchar('a');
    if (nb % 16 == 11)
        my_putchar('b');
    if (nb % 16 == 12)
        my_putchar('c');
    if (nb % 16 == 13)
        my_putchar('d');
    if (nb % 16 == 14)
        my_putchar('e');
    if (nb % 16 == 15)
        my_putchar('f');
}

int my_put_nbr_hexashort(short nb)
{
    if (nb >= 16) {
        my_put_nbr_hexashort(nb / 16);
        if (nb % 16 <= 9)
            my_putchar(48 + nb % 16);
        if (nb % 16 == 10)
            my_putchar('a');
        if (nb % 16 == 11)
            my_putchar('b');
        if (nb % 16 == 12)
            my_putchar('c');
        if (nb % 16 == 13)
            my_putchar('d');
        if (nb % 16 == 14)
            my_putchar('e');
        if (nb % 16 == 15)
            my_putchar('f');
    } else {
        verif_firstshort(nb);
    }
}

void my_puthexa_argshort(va_list *ap)
{
    my_put_nbr_hexashort(va_arg(*ap,int));
}
