# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/02 22:58:23 by caonguye          #+#    #+#              #
#    Updated: 2025/05/05 11:59:13 by caonguye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= Replace
CC		= c++
FLAG	= -Wall -Werror -Wextra -std=c++20
RM		= rm -rf
SRC		= main.cpp
OBJ		= main.o

all : $(NAME)

%.o : %.cpp
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