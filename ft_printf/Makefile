NAME = libftprintf.a

SRCS = ft_printf.c

OBJS = ${SRCS:.c=.o}

CC		= cc

RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
			make -C ./libft
			cp ./libft/libft.a $(NAME)
			ar rcs ${NAME} ${OBJS}


all:	${NAME}

clean:
			${RM} ${OBJS}
			$(RM) libft.a
			make -C ./libft clean

fclean:	clean
			${RM} ${NAME}
			make -C ./libft fclean

re:		fclean all
		make -C ./libft re

.PHONY: all clean fclean re
