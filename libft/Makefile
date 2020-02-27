# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgeruss <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/11 16:09:18 by fgeruss           #+#    #+#              #
#    Updated: 2019/11/28 21:18:50 by asusan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
C_FILE = ft_atoi.c ft_memset.c ft_putnbr.c ft_putchar.c ft_strdel.c ft_strjoin.c ft_strnew.c \
	  ft_strstr.c ft_strdup.c ft_strlen.c ft_strchr.c ft_putstr.c ft_strcmp.c ft_isdigit.c \
	  get_next_line.c ft_printf.c attribute.c printing.c print_s.c print_c.c print_d.c \
	  initialize.c digits_nbr.c print_o.c print_x.c print_u.c print_f1.c print_e.c \
	  print_e_help.c print_e_other.c print_e_other_1.c print_e_other_2.c print_e_presicion.c \
      for_norm.c ft_bzero.c ft_itoa.c ft_strnew_float.c ft_strsub.c ft_isalnum.c ft_isalpha.c

O_FILE = $(addsuffix .o, $(basename $(C_FILE)))


 #=====COLOUR========
 RED = \033[1;31m
 GREEN = \033[1;92m
 BLUE = \033[34;1m
 YELLOW = \033[0;33m
 #===================


all: $(NAME)

$(NAME): $(O_FILE)
	@echo "$(RED)(ﾉ◕ヮ◕)ﾉ*:・ﾟ✧ Compiling library... Wait a sec."
	@ar rc $(NAME) $(O_FILE)
	@echo "$(RED)(•̀ᴗ•́)و $(NAME) generated!"

%.o: %.c
	@$(CC) $(FLAGS) -o $@ -c $<
clean:
	@rm -rf $(O_FILE)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
