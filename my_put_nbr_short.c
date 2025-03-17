/*
** EPITECH PROJECT, 2022
** flag_h
** File description:
** prjct
*/
#include <stdarg.h>
#include <stdio.h>
#include "my_printf.h"

void my_putchar(char c);

int my_put_nbr_short(short nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb >= 10)
        my_put_nbr_short(nb / 10);
    my_putchar(48 + nb % 10);
}

void my_put_nbr_argshort(va_list *ap)
{
    my_put_nbr_short(va_arg(*ap,int));
}
