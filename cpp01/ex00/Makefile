# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/28 02:09:23 by aminoru-          #+#    #+#              #
#    Updated: 2023/10/31 12:07:38 by aminoru-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
CC = c++
FLAG = -Wall -Wextra -Werror -std=c++98
HEADER = Zombie.hpp
SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
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