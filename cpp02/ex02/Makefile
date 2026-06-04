# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/07 19:32:57 by xzhen             #+#    #+#              #
#    Updated: 2026/05/07 21:30:39 by xzhen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = now_we_are_talking

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