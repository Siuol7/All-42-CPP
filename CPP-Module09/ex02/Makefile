# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: siuol <siuol@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/19 05:34:05 by siuol             #+#    #+#              #
#    Updated: 2025/07/19 05:38:32 by siuol            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= PMergeMe
CC		= c++
FLAG	= -Wall -Wextra -Werror -std=c++20
RM		= rm -rf
SRCS	= main.cpp				\
		  PMergeMe.cpp
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