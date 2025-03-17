/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** project
*/

#include "my_printf.h"
#include <stdarg.h>
#include <stdio.h>

const flag_glob_t tab[100] = {
    {'c', my_putchar_arg},
    {'s', my_putstr_arg},
    {'i', my_put_nbr_arg},
    {'d', my_put_nbr_arg},
    {'o', my_putchar_octal_arg},
    {'u', my_putnbr_unsigned_int},
    {'p', flag_p},
    {'x', my_puthexa},
    {'X', my_puthexa2},
    {'f', my_putdouble},
    {'F', my_putdouble},
    {'b', my_put_bin_arg},
    {'e', my_putsci_arg},
    {'E', my_putsci_arg_maj}
};

const flag_glob2_t tab2[100] = {
    {'h', 'i', my_put_nbr_argshort},
    {'h', 'd', my_put_nbr_argshort},
    {'h', 'x', my_puthexa_argshort},
    {'h', 'X', my_puthexamaj_argshort},
    {'h', 'o', my_putchar_octal_argshort},
    {'h', 'u', my_putnbr_unsigned_short}
};

void func_condition(char *format, va_list *ap, int *i, int *j)
{
    if (format[(*i)] == '%' && format[(*i + 1)] == tab[(*j)].flag)
        tab[(*j)].f(ap);
    if (format[(*i)] == '%' && format[(*i + 1)] == tab2[(*j)].flag2
    && format[(*i + 2)] == tab2[(*j)].flag) {
        tab2[(*j)].f2(ap);
        (*i) = (*i) + 1;
    }
}

void func_condition2(char *format, va_list *ap, int *i, int *j)
{
    for ((*j) = 0; (*j) <= 15; (*j)++) {
        func_condition(format, ap, i, j);
    }
    if (format[(*i)] == '%' && format[(*i) + 1] == '%') {
        my_putchar('%');
    }
}

int my_printf(char * format, ...)
{
    va_list ap;
    va_start(ap,format);
    int j = 0;
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] != '%') {
            my_putchar(format[i]);
        } else {
            func_condition2(format, &ap, &i, &j);
            i++;
        }
    }
    va_end(ap);
}
