# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmitrovi <mmitrovi@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/23 15:59:23 by mmitrovi          #+#    #+#              #
#    Updated: 2026/09/23 21:25:29 by mmitrovi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -Iincludes

AR = ar
ARFLAGS = rcs

NAME = libft.a

SRC_DIR = srcs/

SRCS = $(SRC_DIR)ft_putchar.c \
       $(SRC_DIR)ft_putstr.c \
       $(SRC_DIR)ft_strcmp.c \
       $(SRC_DIR)ft_strlen.c \
       $(SRC_DIR)ft_swap.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re