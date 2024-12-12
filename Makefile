# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnoba <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/04 14:42:41 by cnoba             #+#    #+#              #
#    Updated: 2024/12/04 15:04:12 by cnoba            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC_DIR = src
LIBFT_DIR = libft
INC_DIR = include

SRC_FILES = ft_printf.c ft_putlowhex.c ft_putupperhex.c ft_putnbr_u.c ft_putptr.c
LIBFT_FILES = ft_putchar.c ft_putnbr.c ft_putstr.c ft_strchr.c ft_strlen.c

OBJ_FILES = $(SRC_FILES:.c=.o)
LIBFT_OBJ_FILES = $(LIBFT_FILES:.c=.o)

SRC = $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJ = $(addprefix $(SRC_DIR)/, $(OBJ_FILES))
LIBFT_SRC = $(addprefix $(LIBFT_DIR)/, $(LIBFT_FILES))
LIBFT_OBJ = $(addprefix $(LIBFT_DIR)/, $(LIBFT_OBJ_FILES))

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT_OBJ)
	ar rcs $(NAME) $(OBJ) $(LIBFT_OBJ)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -I$(INC_DIR) -I$(LIBFT_DIR) -c $< -o $@

$(LIBFT_DIR)/%.o: $(LIBFT_DIR)/%.c
	$(CC) $(CFLAGS) -I$(LIBFT_DIR) -c $< -o $@

clean:
	rm -f $(OBJ) $(LIBFT_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
