# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pauhenr2 <pauhenr2@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/26 07:28:53 by pauhenr2          #+#    #+#              #
#    Updated: 2026/05/27 14:51:15 by pauhenr2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# __________Configurations________#

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
HEADER = libft.h
TEST_NAME = test_runner
TEST_SRCS = main_test.c


# ___________Source Files_________#

SRCS = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c	\
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c
OBJS = $(SRCS:.c=.o)


# _____________Rules_____________#

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o:%.c $(HEADER)
	$(CC) -c $(CFLAGS) -I . $< -o $@

test: $(NAME)
	$(CC) $(CFLAGS) $(TEST_SRCS) $(NAME) -o $(TEST_NAME)
	./$(TEST_NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) $(TEST_NAME)

re: fclean
	make all

.PHONY: all clean fclean re test
