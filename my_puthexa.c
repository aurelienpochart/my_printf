/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** project
*/

#include <stdarg.h>
#include "my_printf.h"

int verif_first(int nb)
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

int my_put_nbr_hexa(unsigned int nb)
{
    if (nb >= 16) {
        my_put_nbr_hexa(nb / 16);
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
        verif_first(nb);
    }
}

void my_puthexa(va_list *ap)
{
    my_put_nbr_hexa(va_arg(*ap, unsigned int));
}
