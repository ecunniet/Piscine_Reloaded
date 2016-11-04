# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecunniet <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 12:32:58 by ecunniet          #+#    #+#              #
#    Updated: 2016/11/04 18:02:53 by ecunniet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

FLAGS = -Wall -Wextra -Werror

all:
	gcc $(FLAGS) -c file1.c
	gcc $(FLAGS) -o $(NAME) file1.o

clean:
	rm -rf file1.o

fclean: clean
	rm -f $(NAME)

.PHONY = all clean fclean
