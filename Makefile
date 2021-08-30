# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/19 14:11:38 by jpfuhl            #+#    #+#              #
#    Updated: 2021/08/20 16:36:59 by jpfuhl           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRCS_PATH = srcs/
SRCS_OBJS = $(SRCS:.c=.o)
SRCS = \
	./srcs/ft_printf.c \
	./srcs/ft_eval_format.c \
	./srcs/ft_print_char.c \
	./srcs/ft_print_string.c \
	./srcs/ft_print_voidptr.c \
	./srcs/ft_print_integer.c \
	./srcs/ft_print_unsigned.c \
	./srcs/ft_print_hexadecimal.c \
	./srcs/ft_print_hexadecimal_caps.c \
	./srcs/ft_print_percent.c \
	./srcs/ft_putnbr_tl.c \

LIBFT_PATH = ./libft/

.PHONY: all clean fclean re bonus libft

$(NAME): libft $(SRCS_OBJS)
	ar -crs $(NAME) $(SRCS_OBJS)

all: $(NAME)

clean:
	make clean -C $(LIBFT_PATH)
	rm -f $(SRCS_OBJS)

fclean:	clean
	make fclean -C $(LIBFT_PATH)
	rm -f $(NAME)

re: fclean all

bonus: all

libft:
	make all -C $(LIBFT_PATH)