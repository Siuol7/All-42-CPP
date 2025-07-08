# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/08 17:05:57 by caonguye          #+#    #+#              #
#    Updated: 2025/07/08 17:07:09 by caonguye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= 2
CC		= c++
FLAG	= -Wall -Wextra -Werror -std=c++20
RM		= rm -rf
SRCS	= main.cpp
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