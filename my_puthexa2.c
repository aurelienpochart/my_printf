/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** project
*/

#include <stdarg.h>
#include "my_printf.h"

int verif_first2(int nb)
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

int my_put_nbr_hexa2(unsigned int nb)
{
    if (nb >= 16) {
        my_put_nbr_hexa2(nb / 16);
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
        verif_first2(nb);
    }
}

void my_puthexa2(va_list *ap)
{
    my_put_nbr_hexa2(va_arg(*ap, unsigned int));
}
