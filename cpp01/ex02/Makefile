# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/28 17:57:41 by xzhen             #+#    #+#              #
#    Updated: 2026/04/28 17:57:42 by xzhen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = reference

SRC = main.cpp

cc = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
	$(cc) $(CFLAGS) $(SRC) -o $(NAME)

clean :

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY :re all clean fclean 