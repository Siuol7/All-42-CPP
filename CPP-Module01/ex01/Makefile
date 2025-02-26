# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/26 02:09:35 by caonguye          #+#    #+#              #
#    Updated: 2025/02/26 05:08:46 by caonguye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= zombiehorde
CC		= c++
FLAG	= -Wall -Werror -Wextra -std=c++20
RM		= rm -rf
SRCS	= main.cpp Zombie.cpp zombieHorde.cpp
OBJS	= $(SRCS:.cpp=.o)

all : $(NAME)

%.o : %.cpp
	@$(CC) $(FLAG) -c $< -o $@

$(NAME) : $(OBJS)
		@echo "Done"
		@$(CC) $(FLAG) $(OBJS) -o $(NAME)

clean	:
		@$(RM) $(OBJS)

fclean	: clean
		@echo "Clear"
		@$(RM) $(NAME)

re : fclean all

.PHONY	: all clean fclean re



