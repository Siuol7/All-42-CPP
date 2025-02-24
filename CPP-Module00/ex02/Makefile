# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/24 16:36:10 by caonguye          #+#    #+#              #
#    Updated: 2025/02/24 17:13:12 by caonguye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= transaction
CC		= c++
FLAG	= -Wall -Wextra -Werror -std=c++20
RM		= rm -rf
SRCS	= tests.cpp Account.cpp
OBJS	= $(SRCS:.cpp=.o)

all : $(NAME)

%o : %cpp
	@$(CC) $(FLAG) -c $< -o $@

$(NAME) : $(OBJS)
	@echo "Done"
	@$(CC) $(FLAG) $(OBJS) -o $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@echo "Clear"
	@$(RM) $(NAME)

re : fclean all

.PHONY : re all clean fclean