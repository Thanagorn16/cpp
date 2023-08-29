# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/28 15:28:54 by truangsi          #+#    #+#              #
#    Updated: 2023/08/29 16:09:46 by truangsi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Harl

SRCS = main.cpp Harl.cpp

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