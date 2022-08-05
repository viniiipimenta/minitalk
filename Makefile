NAMEONE = client.out \
	   

NAMETWO = server.out \


SRCSONE = client.c \
		  
SRCSTWO = server.c \

CC		= cc


RM		= rm -f


CFLAGS = -Wall -Wextra -Werror


all:	
	cc $(CFLAGS) $(SRCSONE) -o $(NAMEONE)
	cc $(CFLAGS) $(SRCSTWO) -o $(NAMETWO)


clean:
		${RM} ${NAMEONE} ${NAMETWO}

.PHONY: all clean fclean re
