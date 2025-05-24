# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/22 10:51:22 by barmarti          #+#    #+#              #
#    Updated: 2025/05/23 19:40:32 by barmarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC_DIR = src
CONV_DIR = conversions
LIBFT_DIR = libft

SRCS = \
 $(SRC_DIR)/ft_printf.c \
 $(SRC_DIR)/dispatcher.c 
 
CONVERSIONS = \
 $(CONV_DIR)/print_alpha.c \
 $(CONV_DIR)/print_numerals.c \
 $(CONV_DIR)/utils.c

OBJS = $(SRCS:.c=.o) $(CONVERSIONS:.c=.o)

LIBFT = $(LIBFT_DIR)/libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -g -I.
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFT_DIR)
	@cp $(LIBFT) .
	@mv $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS) $(notdir $(LIBFT))

clean:
	@make clean -C $(LIBFT_DIR)
	rm -f $(OBJS)

fclean: clean
	@make fclean -C $(LIBFT_DIR)
	rm -f $(NAME)
	rm -f $(notdir $(LIBFT))

re: fclean all 
