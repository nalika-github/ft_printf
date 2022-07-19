# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ptungbun <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/22 13:50:38 by ptungbun          #+#    #+#              #
#    Updated: 2022/03/25 16:43:03 by ptungbun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = libft.h
CC = gcc
FLAGS = -Wall -Werror -Wextra

# Variable declaration of directory

BUILD_DIR	= build
SRC_DIR		= ./srcs
INCS_DIR	= ./includes

# Note the single quotes the * exoressions. Make will incorrectly expand these otherwise.

SRCS =	ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isalnum.c ft_isprint.c \
		ft_toupper.c ft_tolower.c ft_memcmp.c ft_strncmp.c ft_atoi.c \
		ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_memcpy.c ft_bzero.c \
		ft_memset.c ft_memchr.c ft_memmove.c ft_calloc.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_striteri.c \
		ft_strchr.c ft_strdup.c ft_strrchr.c ft_strnstr.c ft_itoa.c \
		ft_substr.c ft_strtrim.c ft_strmapi.c ft_strjoin.c ft_split.c \
		ft_strcat.c ft_lstnew.c ft_lstadd_front.c ft_lstlast.c ft_lstadd_back.c \
		ft_lstsize.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

# Find all the .o files we want to build libft.a

OBJS = $(SRCS:%.c=$(BUILD_DIR)/%.o)

all: $(NAME)

# Build step for C source

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJS): $(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -I $(INCS_DIR) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR)

fclean:
	rm -rf $(NAME) $(BUILD_DIR)

re: fclean all

.PHONY: all clean fclean re bonus
