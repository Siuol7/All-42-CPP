# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: siuol <siuol@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/12 05:21:53 by siuol             #+#    #+#              #
#    Updated: 2025/07/14 01:20:08 by siuol            ###   ########.fr        #
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