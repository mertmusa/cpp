# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 00:33:02 by mtemel            #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2023/01/20 00:44:52 by mtemel           ###   ########.fr        #
=======
#    Updated: 2023/01/20 19:48:49 by mtemel           ###   ########.fr        #
>>>>>>> 9a70930fbaccfb048b25a3716f1ce77dfd6d5408
#                                                                              #
# **************************************************************************** #

NAME = cpp_ex
CC = c++
<<<<<<< HEAD
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = test_class.cpp
=======
FLAGS = -Wall -Wextra -Werror -glldb -std=c++98
SRCS = test_oop42.cpp
>>>>>>> 9a70930fbaccfb048b25a3716f1ce77dfd6d5408
OBJS = $(SRCS:.cpp = .o)

$(NAME): $(OBJS)
		@$(CC) $(FLAGS) $(SRCS) -o $(NAME)
		@echo "\033[1;32mCOMPILED SUCCESSFULLY\033[0m"

all: $(NAME)

clean:
		@echo "\033[1;32mCLEAN\033[0m"
		@rm -rf $(NAME)

fclean:
		@echo "\033[1;32mFCLEAN\033[0m"
		@make clean

re:
		@echo "\033[1;32mREMAKE\033[0m"
		@make fclean
		@make all

exe:
		@echo "\e[1;32mSTART EXECUTING\e[0m"
		@./$(NAME)
		@echo "\e[1;32mDONE EXECUTING\e[0m"
