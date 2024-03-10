# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/05 10:01:34 by hed-dyb           #+#    #+#              #
#    Updated: 2024/03/05 16:30:53 by hed-dyb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address -g3

NAME = btc

HEADERS = BitcoinExchange.hpp

SRC = main.cpp BitcoinExchange.cpp

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