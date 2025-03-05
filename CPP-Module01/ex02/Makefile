# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/05 16:21:40 by caonguye          #+#    #+#              #
#    Updated: 2025/03/05 16:30:10 by caonguye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= ptref
CC		= c++
FLAG 	= -Wall -Wextra -Werror -std=c++20
RM		= rm -rf
SRC		= main.cpp
OBJ		= main.o

all	: $(NAME)

%.o	: %.c
	@$(CC) $(FLAG) -c $< -o $@

$(NAME)	: $(OBJ)
	@echo "Done"
	@$(CC) $(FLAG) $(OBJ) -o $(NAME)

clean	:
	@echo "Clear"
	@$(RM) $(OBJ)

fclean	: clean
	@$(RM) $(NAME)

re	: fclean all

.PHONY : all clean fclean re