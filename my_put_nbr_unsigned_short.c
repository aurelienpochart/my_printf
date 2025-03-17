/*
** EPITECH PROJECT, 2022
** unsigned short
** File description:
** prjct
*/

#include <stdarg.h>
#include "my_printf.h"

int my_put_nbr2_short(unsigned short nb)
{
    if (nb >= 10)
        my_put_nbr2_short(nb / 10);
    my_putchar(48 + nb % 10);
}

void my_putnbr_unsigned_short(va_list *ap)
{
    my_put_nbr2_short(va_arg(*ap,unsigned int));
}
