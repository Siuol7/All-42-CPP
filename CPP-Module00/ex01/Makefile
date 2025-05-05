# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/21 13:15:46 by caonguye          #+#    #+#              #
#    Updated: 2025/05/05 18:13:40 by caonguye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=phonebook
CC		=c++
FLAG	= -Wall -Wextra -Werror -std=c++20
RM		=rm -rf
SRCS	=	main.cpp PhoneBook.cpp Contact.cpp
OBJS	:=	$(SRCS:.cpp=.o)

all	:	$(NAME)

%.o : %.cpp
		@$(CC) $(FLAG) -c $< -o $@

$(NAME)	: $(OBJS)
		@echo "Done"
		@$(CC) $(FLAG) $(OBJS) -o $(NAME)

clean:
		@$(RM) $(OBJS)

fclean:	clean
		@echo "Clear"
		@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re