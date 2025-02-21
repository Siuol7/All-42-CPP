# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/21 03:37:49 by caonguye          #+#    #+#              #
#    Updated: 2025/02/21 04:16:32 by caonguye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=megaphone
SRC		=megaphone.cpp
OBJ		=$(SRC:.cpp:.o)
RM		=rm -rf
CC		=c++
FLAG	= -Wall -Wextra -Werror

all : ${NAME}

${NAME}: ${OBJ}
		${CC} ${FLAG} ${OBJ} -o ${NAME}

clean :
		${RM} ${OBJ}

fclean : clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
