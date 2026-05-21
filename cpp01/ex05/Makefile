# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/03 19:12:50 by xzhen             #+#    #+#              #
#    Updated: 2026/05/03 19:33:24 by xzhen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlll

SRC = main.cpp Harl.cpp

CFLAGS = -Wall -Werror -Wextra -std=c++98

cc = c++

all : $(NAME)

$(NAME) : $(SRC)
	$(cc) $(CFLAGS) $(SRC) -o $(NAME)

clean :  

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: re all clean fclean

	