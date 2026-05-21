# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/24 18:07:39 by xzhen             #+#    #+#              #
#    Updated: 2026/04/25 22:06:21 by xzhen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombies

SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

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
