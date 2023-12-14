# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/28 02:09:23 by aminoru-          #+#    #+#              #
#    Updated: 2023/12/13 01:17:05 by aminoru-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = form
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
HEADER = Bureaucrat.hpp Form.hpp
SRC = main.cpp Bureaucrat.cpp Form.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

.cpp.o:
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(OBJ) $(FLAGS) -o $(NAME)
	
clean:
	rm -rf $(OBJ)	
	
fclean: clean
	rm -rf 	$(NAME)

re: fclean all

.PHONY: all clean fclean re 