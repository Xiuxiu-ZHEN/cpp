# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/03 19:36:41 by xzhen             #+#    #+#              #
#    Updated: 2026/05/03 20:13:12 by xzhen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter

cc = c++

CFLAGS = -Wall -Wextra -Wextra -std=c++98

SRC = main.cpp Harl.cpp

all : $(NAME)

$(NAME) : $(SRC)
	$(cc) $(CFLAGS) $(SRC) -o $(NAME)

clean :

fclean :
	rm -f $(NAME)

re :
	fclean all

.PHONY: re all clean fclean