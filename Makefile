NAME	=	my_ls

CFLAGS	=	-g -std=c11 -L lib/ -Wall -Werror -Wextra

LDFLAGS =	-lall -I lib/my/ -I lib/option/ -I lib/main/

LIB		=	./lib/liball.a

SRC		=	$(wildcard lib/*/*.c)

AR		=	ar rc

CC		=	gcc

OBJ		= 	$(SRC:%.c=%.o)

RM		=	rm -f

all:		lib $(NAME)

lib:		$(OBJ)
			$(AR) $(LIB) $(OBJ) 
			ranlib $(LIB)

$(NAME):	$(OBJ)
			$(CC) $(OBJ) $(CFLAGS) -o $(NAME) $(LDFLAGS)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME) $(LIB)

re:			fclean all
