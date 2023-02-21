# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsirirak <tsirirak@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/22 03:26:08 by tsirirak          #+#    #+#              #
#    Updated: 2023/02/22 03:29:38 by tsirirak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = push_check.c push_stack.c push_salap.c push_swap.c push_sort.c \
push_assign_index.c

OBJ_C = $(SRC:.c=.o)
OBJ_DIR = obj
OBJ := $(addprefix $(OBJ_DIR)/, $(OBJ_C))
CC = gcc
CFLAGS = -Wall -Wextra -Werror
HEADER = push_swap.h
RM = rm -f
LIBFT_PATH = libft/
LIBFT_A = libft/libft.a

$(OBJ_DIR)/%.o: %.c $(HEADER)
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

all :  $(NAME)

$(NAME) : libft $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT_A)

libft :
	@make -C $(LIBFT_PATH) 1> /dev/null

norm :
	@echo "Check norm bab mai greng jei kai" | espeak
	@norminette -R CheckForbiddenSourceHeader $(LIBFT_PATH)*.c
	@norminette -R CheckDefine $(LIBFT_PATH)*.h
	@norminette -R CheckForbiddenSourceHeader $(SRC)


clean :
	@make -C $(LIBFT_PATH) clean
	@$(RM) $(OBJ)

fclean :
	@make -C $(LIBFT_PATH) fclean
	@rm -rf $(OBJ_DIR)
	@$(RM) $(NAME)

re : fclean all
.PHONY:libft