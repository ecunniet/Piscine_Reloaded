# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecunniet <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 12:32:58 by ecunniet          #+#    #+#              #
#    Updated: 2016/11/04 14:24:19 by ecunniet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRC = srcs/ft_putchar.c \
	  srcs/ft_putstr.c \
	  srcs/ft_strcmp.c \
	  srcs/ft_strlen.c \
	  srcs/ft_swap.c

INC = -I includes/

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC) $(INC)
	ar rc $(NAME) ft_putchar.o ft_putstr.o \
		ft_strcmp.o ft_strlen.o ft_swap.o

clean:
	rm -rf ft_putchar.o ft_putstr.o \
		ft_strcmp.o ft_strlen.o ft_swap.o

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY = all clean fclean re
