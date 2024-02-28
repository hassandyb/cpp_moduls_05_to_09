# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/24 19:54:29 by hed-dyb           #+#    #+#              #
#    Updated: 2024/02/25 10:15:25 by hed-dyb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = iter

HEADERS = iter.hpp

SRC = main.cpp 

OBJECTS = ./Object_files


OBJ = $(addprefix $(OBJECTS)/, $(SRC:.cpp=.o))


all: $(NAME)


$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)


$(OBJECTS)/%.o: %.cpp $(HEADERS)
	@mkdir -p $(OBJECTS)
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -rf $(OBJECTS)


fclean: clean
	rm -f $(NAME)


re: fclean all

.PHONY: clean fclean re

