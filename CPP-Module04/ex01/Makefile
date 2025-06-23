# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: siuol <siuol@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/16 17:42:15 by caonguye          #+#    #+#              #
#    Updated: 2025/06/23 01:27:28 by siuol            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= 1
CC		= c++
FLAG	= -Wall -Wextra -Werror -std=c++20
RM		= rm -rf
SRCS	= Animal.cpp		\
		  Cat.cpp			\
		  Dog.cpp			\
		  WrongAnimal.cpp	\
		  WrongCat.cpp		\
		  Brain.cpp			\
		  main.cpp
OBJS	= ${SRCS:.cpp=.o}

all : $(NAME)

%.o : %.cpp
		@$(CC) $(FLAG) -c $< -o $@

$(NAME) : $(OBJS)
		@echo "Compiled"
		@$(CC) $(FLAG) $(OBJS) -o $(NAME)

clean :
		@$(RM) $(OBJS)

fclean : clean
		@echo "Clear"
		@$(RM) $(NAME)

re :fclean all

.PHONY : all clean fclean re