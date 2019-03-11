# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabala <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/23 07:17:34 by atabala           #+#    #+#              #
#    Updated: 2018/10/29 11:15:08 by atabala          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) *.c 
	ar rc $(NAME) *.o
clean:
	rm -rf *.o
fclean: clean
	rm -rf $(NAME)

re: fclean all	
