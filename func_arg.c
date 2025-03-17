/*
** EPITECH PROJECT, 2022
** func_arg
** File description:
** prjct
*/
#include <stdarg.h>
#include "my_printf.h"

void my_putchar_arg(va_list *ap)
{
    my_putchar(va_arg(*ap, int));
}

void my_putstr_arg(va_list *ap)
{
    my_putstr(va_arg(*ap, char*));
}

void my_put_nbr_arg(va_list *ap)
{
    my_put_nbr(va_arg(*ap, int));
}
