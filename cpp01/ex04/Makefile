# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/28 21:45:30 by xzhen             #+#    #+#              #
#    Updated: 2026/05/11 22:12:32 by xzhen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

SRC = main.cpp FileReplacer.cpp

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
