# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 00:33:02 by mtemel            #+#    #+#              #
#    Updated: 2023/01/17 00:33:11 by mtemel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cpp_ex
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = *.cpp
OBJS = $(SRCS:.cpp = .o)

$(NAME): $(OBJ)
		@$(CC) $(FLAGS) $(SRCS) -o $(NAME)
		@echo "\e[1;32mCOMPILED SUCCESSFULLY\e[0m"

all: $(NAME)

clean:
		@echo "\e[1;32mCLEAN\e[0m"
		@rm -rf $(NAME)

fclean:
		@echo "\e[1;32mFCLEAN\e[0m"
		@make clean

re:
		@echo "\e[1;32mREMAKE\e[0m"
		@make fclean
		@make all

exe:
		@echo "\e[1;32mSTART EXECUTING\e[0m"
		@./$(NAME)
		@echo "\e[1;32mDONE EXECUTING\e[0m"
