# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/31 11:52:41 by davidro2          #+#    #+#              #
#    Updated: 2023/11/17 15:10:42 by davidro2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = \
	ft_putchar_pf.c ft_putstr_pf.c ft_strlen_pf.c ft_putnbr_pf.c \
	ft_print_format.c  ft_printf.c ft_uputnbr.c

OBJS = $(SRC:.c=.o)

RM = rm -f

CC = cc

CCFLAGS = -Wall -Werror -Wextra

LIBFT = libft

all:	$(NAME)

$(NAME):	$(OBJS)
			make -C ./libft
			cp libft/libft.a .
			mv libft.a $(NAME)
			ar rsc $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclan re