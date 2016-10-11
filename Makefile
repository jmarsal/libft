# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmarsal <jmarsal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/02 15:19:59 by jmarsal           #+#    #+#              #
#    Updated: 2016/10/11 12:02:40 by jmarsal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = clang
DEBUG_FLAGS = -g -O0
OPTI_FLAGS = -O2
CFLAGS = -Wall -Wextra -Werror $(OPTI_FLAGS)

# Headers
INC_PATH = -I./includes/

# Sources
SRC_PATH = src_str_manage
SRC_PATH += src_list
SRC_PATH += src_mem
SRC_PATH += src_char_control
SRC_PATH += src_conversion
SRC_PATH += src_file_manage
SRC_PATH += src_math
SRC_PATH += src_mlx
SRC_PATH += src_output
SRC_PATH += src_str_control
SRC_PATH += src_numeric_manage
SRC_PATH += src_array

vpath %.c $(SRC_PATH)

SRC_ARRAY =				ft_array_create.c \
						ft_array_add.c \
						ft_array_destroy.c

SRC_NUMERIC_MANAGE =	ft_swap.c

SRC_STR_MANAGE =		ft_strcat.c \
						ft_strncat.c \
						ft_strlcat.c \
						ft_strcpy.c \
						ft_strncpy.c \
						ft_strdup.c \
						ft_strnew.c \
						ft_strdel.c \
						ft_strclr.c \
						ft_striter.c \
						ft_striteri.c \
						ft_strmap.c \
						ft_strmapi.c \
						ft_strsub.c \
						ft_strjoin.c \
						ft_strtrim.c\
						ft_strsplit.c \
						ft_strtoupper.c \
						ft_strtolower.c \
						ft_strrev.c \
						ft_strreplace.c

SRC_STR_CONTROL =		ft_strlen.c \
						ft_strnlen.c \
						ft_strchr_bef.c \
						ft_strchr.c \
						ft_strrchr.c \
						ft_strstr.c \
						ft_strnstr.c \
						ft_strcmp.c \
						ft_strncmp.c \
						ft_strequ.c \
						ft_strnequ.c \
						ft_strchrpos.c

SRC_OUTPUT =			ft_putchar.c \
						ft_putstr.c \
						ft_putnbr.c \
						ft_putlnbr.c \
						ft_putllnbr.c \
						ft_putchar_fd.c \
						ft_putstr_fd.c \
						ft_putnbr_fd.c \
						ft_putendl.c \
						ft_putendl_fd.c \
						ft_print_memory.c

SRC_MLX =				ft_get_color_mlx.c

SRC_MATH =				ft_abs.c \
						ft_min.c \
						ft_max.c


SRC_FILE_MANAGE =		ft_get_next_line.c

SRC_CONVERSION =		ft_litoa.c \
						ft_litoa_base.c \
						ft_ulitoa.c \
						ft_ulitoa_base.c \
						ft_itoa.c \
						ft_itoa_base.c \
						ft_atoi.c \
						ft_atoi_base.c \
						ft_get_number.c


SRC_LST = 				ft_lstnew.c \
						ft_lstdelone.c \
						ft_lstdel.c \
						ft_lstadd.c \
						ft_lstadd_end.c \
						ft_lstiter.c \
						ft_lstmap.c

SRC_MEM =				ft_memalloc.c \
						ft_memdel.c \
						ft_realloc.c \
						ft_memset.c \
						ft_memcpy.c \
						ft_memccpy.c \
						ft_bzero.c\
						ft_memmove.c \
						ft_memchr.c \
						ft_memcmp.c

SRC_CHAR_CONTROL =		ft_isupper.c \
						ft_islower.c \
						ft_isspace.c \
						ft_isalpha.c \
						ft_isdigit.c \
						ft_isascii.c \
						ft_isalnum.c \
						ft_isprint.c \
						ft_toupper.c \
						ft_tolower.c


SRCS = $(SRC_STR_MANAGE) $(SRC_LST) $(SRC_MEM) $(SRC_CHAR_CONTROL) $(SRC_CONVERSION)
SRCS += $(SRC_FILE_MANAGE) $(SRC_MATH) $(SRC_MLX) $(SRC_STR_CONTROL) $(SRC_NUMERIC_MANAGE)
SRCS += $(SRC_OUTPUT) $(SRC_ARRAY)

# Objects
OBJ_PATH = ./obj
OBJ = $(SRCS:%.c=$(OBJ_PATH)/%.o)

# Rules
all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\n-----------------------------------------------------------------"
	@echo "|\033[32;1m\t$(NAME) has been created with $(OPTI_FLAGS) optimisation\t\t\033[0m|"
	@echo "-----------------------------------------------------------------\n"

$(OBJ_PATH)/%.o: %.c
	@mkdir -p $(OBJ_PATH)
	@$(CC) -o $@ -c $< $(CFLAGS) $(INC_PATH)

clean:
	@rm -rf $(OBJ_PATH)
	@echo "\n-------------------------------------------------"
	@echo "|\t\033[31mall libft_files.o are deleted\033[0m\t\t|"
	@echo "-------------------------------------------------\n"

fclean: clean
	@rm -f $(NAME)
	@echo "\n-----------------------------------------"
	@echo "|\t\033[31m$(NAME) is deleted\033[0m\t\t|"
	@echo "-----------------------------------------\n"

re: fclean all

debug: CFLAGS := $(filter-out $(OPTI_FLAGS),$(CFLAGS) $(DEBUG_FLAGS))
debug : re
	@echo "\n-----------------------------------------------------------------"
	@echo "|\033[32;1m\tDebug mode for $(NAME) with $(DEBUG_FLAGS)!\t\033[0m|"
	@echo "-----------------------------------------------------------------\n"

norme:
	norminette $(SRCS)
	norminette $(INC_PATH)*.h

.PHONY:  all, clean, fclean, re, debug, norme
