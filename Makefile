#-----Configurations-----

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror


#-----Source Files-----

SRCS = ft_isalfa
OBJS = $(SRCS:.c=.o)


# -----Rules-----

all: $(NAME)

clean:
	rm -r $(OBJS)

fclean: clean
	rm -r $(NAME)

re: fclean
	make all

.PHONY: all clean fclean re
