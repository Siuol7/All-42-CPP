# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/21 03:37:49 by caonguye          #+#    #+#              #
#    Updated: 2025/05/06 14:19:58 by caonguye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=megaphone
SRC		=megaphone.cpp
OBJ		=$(SRC:.cpp=.o)
RM		=rm -rf
CC		=c++
FLAG	= -Wall -Wextra -Werror -std=c++20

all : $(NAME)

%.o : %.cpp
		@$(CC) $(FLAG) -c $< -o $@

$(NAME): $(OBJ)
		@echo "Done"
		@$(CC) $(FLAG) $(OBJ) -o $(NAME)

clean :
		@$(RM) $(OBJ)

fclean : clean
		@echo "Clear"
		@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
