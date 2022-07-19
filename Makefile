# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ptungbun <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/05 11:19:31 by ptungbun          #+#    #+#              #
#    Updated: 2022/06/05 11:19:33 by ptungbun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

# Variable declaration of directory
INCS_DIR	= ./includes
LIBFT_DIR	= ./libft
BUILD_DIR	= build
SRC_DIR		= ./srcs

# Variable declaration of file
LIBFT		= $(LIBFT_DIR)/libft.a

SRCS		=	ft_printf.c get_format_info.c convert_type.c \
				convert_flag.c print_format.c read_arg.c set_format.c \
				misc/convert_c_type.c misc/convert_d_type.c \
				misc/convert_p_type.c misc/convert_s_type.c \
				misc/convert_u_type.c misc/convert_x_type.c

OBJS		= $(SRCS:%.c=$(BUILD_DIR)/%.o)

MAIN		= main.c

all: $(NAME)

# Build step for C source

$(NAME): $(OBJS) $(LIBFT)
	@ar rc $(NAME) $(OBJS)

$(OBJS): $(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -I $(INCS_DIR) -I $(LIBFT_DIR) -c $< -o $@

$(LIBFT):
	@make -C $(LIBFT_DIR)
	@cp $(LIBFT) $(NAME)

bonus: all

clean:
	@make clean -C $(LIBFT_DIR)
	@rm -rf $(BUILD_DIR)

fclean:
	@make fclean -C $(LIBFT_DIR)
	@rm -rf $(NAME) $(BUILD_DIR)

re: fclean all

test: re
	@$(CC) main.c -I $(INCS_DIR) -L. -lftprintf -o runtest.out
	@./runtest.out

memtest: re
	@$(CC) $(CFLAGS) main.c -I $(INCS_DIR) -L. -lftprintf -o memtest.out
	@valgrind -q --leak-check=full --track-origins=yes ./memtest.out

.PHONY: all clean fclean re
