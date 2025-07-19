# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/07 20:37:17 by siuol             #+#    #+#              #
#    Updated: 2025/07/19 16:28:56 by caonguye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= 1
CC		= c++
FLAG	= -Wall -Wextra -Werror -std=c++20
RM		= rm -rf
SRCS	= Serializer.cpp	\
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