# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/31 11:52:41 by davidro2          #+#    #+#              #
#    Updated: 2023/11/02 15:10:29 by davidro2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = \
	ft_putchar.c ft_putstr.c

OBJS = $(SRC:.c=.o)

RM = rm -f

CC = cc

CCFLAGS = -Wall -Werror -Wextra

all:	%(NAME)

%(NAME):	%(OBJS)
			ar rsc %(NAME) %(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY all clean fclan re