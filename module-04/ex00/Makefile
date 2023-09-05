# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prachman <prachman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/28 15:28:54 by truangsi          #+#    #+#              #
#    Updated: 2023/09/05 21:52:39 by prachman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Animal

SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

%o:%cpp
	c++ $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	c++ $(OBJS) $(FLAGS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: clean fclean re all bonus