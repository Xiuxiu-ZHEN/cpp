# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/26 21:57:40 by xzhen             #+#    #+#              #
#    Updated: 2026/04/26 22:02:49 by xzhen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombies

SRC = main.cpp Zombie.cpp zombieHorde.cpp

cc = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
	$(cc) $(CFLAGS) $(SRC) -o $(NAME)

clean:

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re