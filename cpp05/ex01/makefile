# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/08 15:30:48 by hed-dyb           #+#    #+#              #
#    Updated: 2024/02/09 12:36:18 by hed-dyb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat
HEADER = Bureaucrat.hpp Form.hpp
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf
SRC = main.cpp Bureaucrat.cpp Form.cpp

OBJ = $(SRC:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	
%.o : %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@
	
clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
