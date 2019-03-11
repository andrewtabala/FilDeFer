# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabala <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/04 09:29:21 by atabala           #+#    #+#              #
#    Updated: 2018/12/04 09:29:23 by atabala          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = fdf
NAMEL = libft.a
CFLAG = -c
FLAGS = -Wall -Wextra -Werror

BOLD = \033[1m
UNDERLINE = \033[4m
RED = \033[0;31m
GREEN = \033[0;32m
RESET = \033[0m

all: $(NAME)

$(NAME): 
	cd libft; \
		gcc $(CFLAG) $(FLAGS) *.c; \
		ar rc $(NAMEL) *.o
	@echo "$(BOLD)$(NAMEL)	$(GREEN)$(UNDERLINE)was created$(RESET)" 
	gcc $(FLAGS) -I /usr/local/include fdf.c\
		get_next_line/get_next_line.c \
		libft/libft.a \
		drawline.c\
		mainiso.c\
		mainpar.c\
		zeroiso.c\
		positiveiso.c\
		negativeiso.c\
		parallel.c\
		img.c\
		mousemove.c\
		keyactions.c\
		colorswitch.c\
		-L /usr/local/lib \
		-lmlx -framework OpenGL \
		-framework Appkit \
		-o fdf
	@echo "$(BOLD)$(NAME)	$(GREEN)$(UNDERLINE)was created$(RESET)"
clean:
	rm -rf *.o
	@echo "$(BOLD).o's	$(RED)$(UNDERLINE)were deleted$(RESET)"
fclean: clean
	rm -rf $(NAME)
	@echo "$(BOLD)$(NAME)	$(RED)$(UNDERLINE)was deleted$(RESET)"

re: fclean all	