# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: codespace <codespace@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/05 11:38:31 by amarzouk          #+#    #+#              #
#    Updated: 2024/02/05 19:57:09 by codespace        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checker
LIBFT_DIR = ../my_library
LIBFT = libft.a
RM	= rm -f

SRCS = push_swap/handle_errors.c \
       push_swap/init_a_to_b.c \
       push_swap/init_b_to_a.c \
       push_swap/push_swap.c \
       push_swap/split.c \
       push_swap/stack_init.c \
       push_swap/stack_utils.c \
       push_swap/strjoin_swap.c \
       commands/push.c \
       commands/rev_rotate.c \
       commands/rotate.c \
       commands/sort_stacks.c \
       commands/sort_three.c \
       commands/swap.c \
       checker.c

OBJ = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

$(NAME): $(LIBFT) $(OBJ)
	@$(CC) $(CFLAGS) -o ../$(NAME) $(OBJ) -L$(LIBFT_DIR) -lft
	@echo Program $(NAME) is ready!! 🚀

$(LIBFT):
	@make -C $(LIBFT_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME) clean

clean:
	 @$(RM) $(OBJ)
	@echo Object files successfully deleted! 🧹

fclean: clean
	 @$(RM) ../$(NAME)
	 @$(RM) $(LIBFT_DIR)/$(LIBFT)
	@echo Done!! 🎉

re: fclean all