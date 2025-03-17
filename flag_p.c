/*
** EPITECH PROJECT, 2022
** flag_p
** File description:
** prjct
*/

#include <stdarg.h>
#include "my_printf.h"
#include <stdlib.h>
#include <stdio.h>

int verif_first_add(unsigned long long int nb)
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

int my_put_nbr_hexa_add(unsigned long long nb)
{
    if (nb >= 16) {
        my_put_nbr_hexa_add(nb / 16);
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
        verif_first_add(nb);
    }
}

void flag_p(va_list *ap)
{
    unsigned long long int add = va_arg(*ap,unsigned long long int);
    my_putstr("0x");
    my_put_nbr_hexa_add(add);
}
