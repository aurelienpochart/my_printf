/*
** EPITECH PROJECT, 2022
** put_nbr_unsigned
** File description:
** prjct
*/

#include <stdarg.h>
#include "my_printf.h"

int my_put_nbr2(unsigned int nb)
{
    if (nb >= 10)
        my_put_nbr2(nb / 10);
    my_putchar(48 + nb % 10);
}

void my_putnbr_unsigned_int(va_list *ap)
{
    my_put_nbr2(va_arg(*ap,unsigned int));
}
