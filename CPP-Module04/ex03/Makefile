# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/25 22:56:19 by siuol             #+#    #+#              #
#    Updated: 2025/07/09 15:15:20 by caonguye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= 3
CC		= c++
FLAG	= -Wall -Wextra -Werror -std=c++20
RM		= rm -rf
SRCS	= AMateria.cpp		\
		  Character.cpp		\
		  Cure.cpp			\
		  Ice.cpp			\
		  MateriaSource.cpp	\
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