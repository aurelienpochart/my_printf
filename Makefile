##
## EPITECH PROJECT, 2022
## makefile cat
## File description:
## Makefile
##

SRC		=	convert_octal.c flag_p.c \
			func_arg.c my_printf.c \
			my_put_nbr.c my_putchar.c \
			my_puthexa.c my_puthexa2.c \
			my_putnbr_float.c my_putnbr_unsigned_int.c \
			my_putstr.c my_put_bin.c \
			my_putnbr_sci.c my_putnbr_sci2.c\
			my_putsci_arg_maj.c convert_octal_short.c \
			my_put_nbr_short.c my_puthexa_short.c \
			my_puthexamaj_short.c my_put_nbr_unsigned_short.c

OBJ		=	$(SRC:.c=.o)

NAME 		= libmy.a


UNIT_TEST   = --coverage -lcriterion -L ../lib/my -lmy

all: $(NAME)

$(NAME):
				gcc -c $(SRC)
				ar rc $(NAME) $(OBJ)
				make clean

clean:
				rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)

re: fclean all
