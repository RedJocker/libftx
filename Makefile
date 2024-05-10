#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/05 22:04:40 by maurodri          #+#    #+#              #
#    Updated: 2024/05/10 14:48:12 by maurodri         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
FILES = ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_islower.c \
		ft_isspace.c \
		ft_isupper.c \
		ft_strlen.c \
		ft_free_retnull.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_realloc.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_chomp.c \
		ft_split.c \
		ft_split_quote.c \
		ft_itoa.c \
		ft_nop.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_lstnew_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstmap_bonus.c \
		ft_printf_bonus.c \
		flag_utils_bonus.c \
		parser_bonus.c \
		parser_utils_bonus.c \
		parser_format_args_bonus.c \
		presenter_bonus.c \
		presenter_utils_bonus.c \
		presenter_utils2_bonus.c \
		presenter_utils3_bonus.c \
		present_string_bonus.c \
		present_base10_bonus.c \
		present_ubase10_bonus.c \
		present_char_bonus.c \
		present_escape_bonus.c \
		present_hexa_bonus.c \
		present_pointer_bonus.c \
		get_next_line.c \
		ft_arraylist_add.c \
		ft_arraylist_addat.c \
		ft_arraylist_destroy.c \
		ft_arraylist_foreach.c \
		ft_arraylist_foreacharg.c \
		ft_arraylist_foreach2d.c \
		ft_arraylist_foreach2darg.c \
		ft_arraylist_swap.c \
		ft_arraylist_swap2d.c \
		ft_arraylist_switch.c \
		ft_arraylist_switch2d.c \
		ft_arraylist_get.c \
		ft_arraylist_len.c \
		ft_arraylist_new.c \
		ft_arraylist_peek.c \
		ft_arraylist_pop.c \
		ft_arraylist_replace.c \
		ft_arraylist_replace2d.c \
		ft_arraylist_transform.c \
		ft_arraylist_transform2d.c \
		ft_arraylist_transform2di.c \
		ft_arraylist_transform2diarg.c \
		stringbuilder.c

VPATH = ./ft_printf \
		./ft_printf/parser_bonus/ \
		./ft_printf/presenter_bonus/ \
		./libft \
		./get_next_line \
		./ft_arraylist \
		./stringbuilder

INCLUDES := -I./includes -I./ft_printf -I./ft_printf/presenter_bonus -I./ft_printf/parser_bonus
OBJS_DIR := ./obj/
OBJS = $(addprefix $(OBJS_DIR), $(patsubst %.c,%.o,$(FILES)))
DEP_FLAGS := -MP -MD
DEP_FILES := $(addsuffix .d,$(OBJS))
CFLAGS := -g3 -Wall -Wextra -Werror
CC := cc

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $^

$(OBJS): $(OBJS_DIR)%.o : %.c | $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES) $(DEP_FLAGS)

$(DEP_DIR) $(OBJS_DIR):
	@mkdir -p $@  

.PHONY: all clean fclean re bonus

clean:
	rm -fr $(OBJS_DIR) **/*~ *~ **/.#*

fclean: clean
	rm -f $(NAME)

re: fclean all

-include $(DEP_FILES)
