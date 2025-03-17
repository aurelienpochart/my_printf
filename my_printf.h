/*
** EPITECH PROJECT, 2022
** my_printf header
** File description:
** fichier h
*/

#include <stdarg.h>

#ifndef MY_PRINTF_H
    #define MY_PRINTF_H
    #define Name_var(var) #var

void my_putchar_arg(va_list *ap);
void my_putstr_arg(va_list *ap);
void my_put_nbr_arg(va_list *ap);
void my_putchar(char c);
void my_putstr(char const *str);
void my_put_nbr(int nb);
void my_putchar2(va_list *ap);
int convert_octal(int nb);
void my_putchar_octal_arg(va_list *ap);
void my_putnbr_unsigned_int(va_list *ap);
void my_putdouble(va_list *ap);
void flag_p(va_list *ap);
int my_put_nbr_hexa(unsigned int nb);
void my_puthexa(va_list *ap);
void my_puthexa2(va_list *ap);
int verif_first2(int nb);
int verif_first(int nb);
void my_putnbr_float2(long nb3);
void my_putnbr_float(long nb2, int i);
void my_put_bin_arg(va_list *ap);
void my_putsci_arg(va_list *ap);
void my_putnbr_sci2(long nb3);
void my_putnbr_sci(unsigned long long nb3);
void my_putnbr_sci_neg(unsigned long long nb2, int i);
void my_putsci_neg(double nb_float);
void my_putsci_arg_maj(va_list *ap);
void condition_pos_maj(long nb2, long diviseur, int e, int compteur);
void condition_neg_maj(unsigned long long nb2, int i, int e);
void my_putsci_pos_maj(double nb_float);
void my_putsci_neg_maj(double nb_float);
void my_putsci_pos(double nb_float);
void condition_neg(unsigned long long nb2, int i, int e);
void my_putnbr_sci_pos(long nb2, int i);
void my_put_nbr_argshort(va_list *ap);
int my_put_nbr_short(short nb);
void my_puthexa_argshort(va_list *ap);
void my_puthexamaj_argshort(va_list *ap);
void my_putchar_octal_argshort(va_list *ap);
void my_putnbr_unsigned_short(va_list *ap);

typedef struct flag_glob {
    char flag;
    void (*f)(va_list *ap);
}flag_glob_t;

typedef struct flag_glob2 {
    char flag2;
    char flag;
    void (*f2)(va_list *ap);
}flag_glob2_t;

#endif
