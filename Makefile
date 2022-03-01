# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 11:41:33 by imaalem           #+#    #+#              #
#    Updated: 2022/02/21 10:29:06 by imaalem          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CFLAGS = -Wall -Werror -Wextra -I include/push_swap.h

SRC =	./src/stack_utils/liste_chainee.c  \
		./src/stack_utils/liste_chainee_insertion.c  \
		main.c \
		./src/parsing/parsing.c \
		./src/parsing/parsing_utils.c \
		./src/sorting/sort_big_stack.c \
		./src/sorting/sort_small_stack.c \
		./src/stack_utils/stack_utils.c \
		./src/stack_utils/stack_utils_sorting.c \
		./src/stack_utils/operations.c \
		./src/sorting/sort_list_of_three.c \
		./src/sorting/sort_list_of_four.c \
		./src/sorting/sort_list_of_five.c \


OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
			make -C libft
			clang -o $(NAME) $(OBJ) $(CFLAGS) -I libft libft/libft.a

clean :
			rm -rf $(OBJ)
			make clean -C libft

fclean : clean
			rm -rf $(NAME)
			make fclean -C libft

re : fclean all

.PHONY : all clean fclean re