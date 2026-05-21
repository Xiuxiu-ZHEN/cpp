# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/28 17:57:12 by xzhen             #+#    #+#              #
#    Updated: 2026/04/28 20:56:19 by xzhen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Unnecessary_violence

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

cc = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
	$(cc) $(CFLAGS) $(SRC) -o $(NAME)

clean : 

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : re all clean fclean
