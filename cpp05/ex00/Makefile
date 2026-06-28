# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/04 18:02:18 by xzhen             #+#    #+#              #
#    Updated: 2026/06/11 19:43:35 by xzhen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = ex00

SRCS = main.cpp Bureaucrat.cpp

OBJS = $(SRCS:.cpp=.o)

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(Name)

$(Name): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(Name)

%.o: %.cpp Bureaucrat.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	
fclean: clean
	rm -f $(Name)

re: fclean all

.PHONY: all clean fclean re
