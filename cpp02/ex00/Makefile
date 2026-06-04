# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/05 20:44:18 by xzhen             #+#    #+#              #
#    Updated: 2026/05/05 20:45:43 by xzhen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = class_in_form

SRC = main.cpp Fixed.cpp

cc = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
	$(cc) $(CFLAGS) $(SRC) -o $(NAME)

clean :

fclean : clean
	rm -rf $(NAME)

re : fclean all
.PHONY: all clean fclean re