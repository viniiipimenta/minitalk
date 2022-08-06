NAMEONE = client.out \

NAMETWO = server.out \

SRCSONE = client.c \
		  
SRCSTWO = server.c \

CC		= cc

RM		= rm -f

CFLAGS = -Wall -Wextra -Werror


all:	
		make -C ./libft
		mv ./libft/libft.a .
		cc $(CFLAGS) $(SRCSONE) libft.a -o $(NAMEONE)
		cc $(CFLAGS) $(SRCSTWO) libft.a -o $(NAMETWO)

clean:
		${RM} ${NAMEONE} ${NAMETWO}
		${RM} libft.a
		make -C ./libft clean

fclean:
		make clean
		make -C ./libft fclean

re: 
		make -C ./libft re

.PHONY: all clean
