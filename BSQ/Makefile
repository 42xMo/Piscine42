# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cgorin <cgorin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/05 11:08:24 by cgorin            #+#    #+#              #
#    Updated: 2024/03/06 14:51:55 by mabdessm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = bsq
OBJ = $(SRC:.c=.o)
SRC = main.c check_error.c fill_grid.c ft_putstr.c
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $< 

clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: 
	fclean all
	
.PHONY: all clean fclean re
