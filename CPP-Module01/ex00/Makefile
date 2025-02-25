# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/25 14:24:21 by caonguye          #+#    #+#              #
#    Updated: 2025/02/25 17:22:02 by caonguye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= zombie
CC		= c++
FLAG	= -Wall -Werror -Wextra -std=c++20
RM		= rm -rf
SRCS	= main.cpp newZombie.cpp Zombie.cpp randomChump.cpp
OBJS	= $(SRCS:.cpp=.o)

all : $(NAME)

%.o : %.cpp
		@$(CC) $(FLAG) -c $< -o $@

$(NAME) : $(OBJS)
		@echo "Compiled"
		@$(CC) $(FLAG) $(OBJS) -o $(NAME)

clean :
		@$(RM) $(OBJS)


fclean	: clean
		@echo "Clear"
		@$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re