/*
** EPITECH PROJECT, 2022
** my_put_bin
** File description:
** put bin
*/

#include "my_printf.h"
#include <stdarg.h>

void my_put_bin(long nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 2)
        my_put_bin(nb / 2 );
    my_putchar(48 + nb % 2);
}

void my_put_bin_arg(va_list *ap)
{
    my_put_bin(va_arg(*ap, long));
}
