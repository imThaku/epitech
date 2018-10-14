SRC	=	get_language.c \
		my_float_str.c \
		rush2.c \
		utils.c

OBJ	=	$(SRC:.c=.o)

CFLAGS = -I include

NAME	=	rush2

all:	libs $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -L lib/my -lmy

clean:
		rm -f *.o
		make -C lib/my clean

libs:
	make -C lib/my/

fclean:	clean

re:	fclean all
