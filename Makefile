# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: david <david@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/31 11:52:41 by davidro2          #+#    #+#              #
#    Updated: 2023/11/17 00:00:38 by david            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = \
	ft_putchar_pf.c ft_putstr_pf.c ft_strlen_pf.c ft_putnbr_pf.c \
	ft_print_format.c  ft_printf.c

OBJS = $(SRC:.c=.o)

RM = rm -f

CC = cc

CCFLAGS = -Wall -Werror -Wextra

LIBFT = libft

all:	$(NAME)

$(NAME):	$(OBJS)
			ar rsc $(NAME) $(OBJS)
			cp libft/libft.a .
			mv libft.a $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclan re