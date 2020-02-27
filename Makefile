# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asusan <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/26 20:08:07 by asusan            #+#    #+#              #
#    Updated: 2019/11/28 18:14:58 by asusan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

NAME_PS = checker

 FLAGS = -Wall -Wextra -Werror

 FUNC = main operations operations_2 bubble helpers installers three five_four helpers_2 quicksort sort_five sort_four overval parsing

 FUNC_PS = checker operations operations_2 bubble helpers installers three five_four helpers_2 quicksort sort_five sort_four overval parsing for_checker

 HEADER = -I includes/

 SRC = $(addprefix src/, $(addsuffix .c, $(FUNC)))

 SRC_PS = $(addprefix src/, $(addsuffix .c, $(FUNC_PS)))

 OBJ = $(addprefix build/, $(addsuffix .o, $(FUNC)))

 OBJ_PS = $(addprefix build/, $(addsuffix .o, $(FUNC_PS)))

 #=====COLOUR========
 RED = \033[1;31m
 GREEN = \033[1;92m
 BLUE = \033[34;1m
 YELLOW = \033[0;33m
 #===================

all: .PHONY $(NAME) $(NAME_PS)

.PHONY:
	@mkdir -p build
	@make -C libft

$(NAME_PS): $(OBJ_PS)
	@gcc $(FLAGS) -o $(NAME_PS) $(OBJ_PS) $(HEADER) -L libft/ -lft

$(NAME): $(OBJ)
	@echo "$(GREEN)(ﾉ◕ヮ◕)ﾉ*:・ﾟ✧ Compiling progect... Wait a sec."
	@gcc $(FLAGS) -o $(NAME) $(OBJ) $(HEADER) -L libft/ -lft
	@echo "$(GREEN)(•̀ᴗ•́)و $(NAME) generated!"

build/%.o: src/%.c libft/libft.a includes/push_swap.h
	@gcc $(FLAGS) -o $@ -c $< $(HEADER)

norm :
	@norminette $(SRC)

clean:
	@make clean -C libft
	@/bin/rm -f $(OBJ)
	@/bin/rm -f $(OBJ_PS)
	@rm -rf build
	@echo "  $(BLUE)OBJ files have been deleted."

fclean: clean
	@make fclean -C libft
	@/bin/rm -f $(NAME)
	@/bin/rm -f $(NAME_PS)
	@echo "  $(BLUE)$(NAME) have been deleted."

re: fclean all
