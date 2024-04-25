# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabdessm <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/18 14:59:56 by mabdessm          #+#    #+#              #
#    Updated: 2024/04/18 15:52:47 by mabdessm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_putchar.c\
       srcs/ft_putstr.c\
       srcs/ft_strcmp.c\
       srcs/ft_strlen.c\
       srcs/ft_swap.c\

CC = cc
FLAGS = -Wall -Werror -Wextra -Iincludes
RM = rm -f
NAME = libft.a
OBJS = $(SRCS:.c=.o)

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean
