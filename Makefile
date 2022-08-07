NAMEONE = client \

NAMETWO = server \

SRCSONE = client.c \
		  
SRCSTWO = server.c \

CC		= cc

RM		= rm -f

CFLAGS = -Wall -Wextra -Werror


all:	
		make -C ./ft_printf
		mv ./ft_printf/libftprintf.a .
		cc $(CFLAGS) $(SRCSONE) libftprintf.a -o $(NAMEONE)
		cc $(CFLAGS) $(SRCSTWO) libftprintf.a -o $(NAMETWO)

clean:
		${RM} ${NAMEONE} ${NAMETWO}
		${RM} libftprintf.a
		make -C ./ft_printf clean

fclean:
		make clean
		make -C ./ft_printf fclean

re: 
		make -C ./ft_printf re

.PHONY: all clean
