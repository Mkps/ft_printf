# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aloubier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/07 15:53:37 by aloubier          #+#    #+#              #
#    Updated: 2023/03/25 13:52:33 by aloubier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ./src/ft_printf.c\
./src/ft_printf_utils.c\
./src/ft_printf_nbr.c\
./src/ft_printf_ptr.c\
./src/ft_printf_hex.c

OBJ = $(SRC:%.c= %.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I./includes

all: $(NAME)

$(NAME): $(OBJ) 
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
