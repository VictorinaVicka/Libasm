# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/17 10:35:12 by tfarenga          #+#    #+#              #
#    Updated: 2020/08/17 16:39:54 by tfarenga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

TESTNAME = test

CLANG = gcc

FLAG = -Wall -Wextra -Werror

NA = nasm

NAFLAG = -f macho64

SRC = ft_strlen.s

OBJ = $(SRC:.s=.o)

.PHONY: all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJ)
			@ar rcs $(NAME) $(OBJ)
%.o : %.s
			$(NA) $(NAFLAG) $< -o $@

clean:
			rm -f $(OBJ)

fclean: clean
			rm -f $(NAME)
			rm -f $(TESTNAME)

re: 		fclean all

test:
	$(CLANG) $(FLAG) main.c -I. $(NAME) -o $(TESTNAME)

run: test
	./$(TESTNAME)