# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/06 22:33:10 by xzhen             #+#    #+#              #
#    Updated: 2026/05/07 18:11:27 by xzhen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = more_useful_fixed-point_number_class

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