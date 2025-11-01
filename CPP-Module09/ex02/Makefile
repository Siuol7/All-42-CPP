# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/19 05:34:05 by siuol             #+#    #+#              #
#    Updated: 2025/11/01 16:12:17 by caonguye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = PMergeMe
CC      = c++
FLAG    = -Wall -Wextra -Werror -std=c++20
RM      = rm -rf
SRCS    = main.cpp PMergeMe.cpp
OBJS    = ${SRCS:.cpp=.o}

all : $(NAME)

%.o : %.cpp
	@if [ ! -f $@ ]; then \
		$(CC) $(FLAG) -c $< -o $@; \
		echo "Compiled $@"; \
	fi

$(NAME) : $(OBJS)
	@if [ ! -f $(NAME) ]; then \
		$(CC) $(FLAG) $(OBJS) -o $(NAME); \
		echo "Linked $(NAME)"; \
	fi

clean :
	@$(RM) $(OBJS)
	@echo "Object files removed"

fclean : clean
	@$(RM) $(NAME)
	@echo "Program removed"

re : fclean all

.PHONY : all clean fclean re