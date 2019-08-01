# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yijhuang <yijhuang@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/13 23:24:03 by yijhuang          #+#    #+#              #
#    Updated: 2019/06/16 17:33:44 by yijhuang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIBFT = libft/ft_memset.c \
		libft/ft_bzero.c \
		libft/ft_strcmp.c \
		libft/ft_strncmp.c \
		libft/ft_isalpha.c \
		libft/ft_isdigit.c \
		libft/ft_isalnum.c \
		libft/ft_isascii.c \
		libft/ft_isprint.c \
		libft/ft_toupper.c \
		libft/ft_tolower.c\
		libft/ft_memcpy.c \
		libft/ft_memccpy.c \
		libft/ft_memchr.c \
		libft/ft_memcmp.c \
		libft/ft_strcat.c \
		libft/ft_strlen.c \
		libft/ft_strdup.c \
		libft/ft_strcpy.c \
		libft/ft_strncpy.c \
		libft/ft_strncat.c \
		libft/ft_strchr.c \
		libft/ft_strrchr.c \
		libft/ft_strstr.c \
		libft/ft_strnstr.c \
		libft/ft_atoi.c \
		libft/ft_memmove.c \
		libft/ft_strlcat.c \
		libft/ft_memalloc.c \
		libft/ft_memdel.c \
		libft/ft_strnew.c \
		libft/ft_strdel.c \
		libft/ft_strclr.c \
		libft/ft_striter.c \
		libft/ft_striteri.c \
		libft/ft_strmap.c \
		libft/ft_strmapi.c \
		libft/ft_strequ.c \
		libft/ft_strnequ.c \
		libft/ft_strsub.c \
		libft/ft_strjoin.c \
		libft/ft_strtrim.c \
		libft/ft_strsplit.c \
		libft/ft_itoa.c \
		libft/ft_putchar.c \
		libft/ft_putstr.c \
		libft/ft_putendl.c \
		libft/ft_putnbr.c \
		libft/ft_putchar_fd.c \
		libft/ft_putstr_fd.c \
		libft/ft_putendl_fd.c \
		libft/ft_putnbr_fd.c \
		libft/ft_word_len.c \
		libft/ft_words_count.c \
		libft/ft_is_space.c \
		libft/ft_zero_str.c \
        libft/ft_is_lower.c \
		libft/ft_lstnew.c \
		libft/ft_lstdelone.c \
		libft/ft_lstdel.c \
		libft/ft_lstadd.c \
		libft/ft_lstiter.c \
		libft/ft_lstmap.c \
		libft/ft_strjoin_del.c

PRINTF = ft_printf/conv_s.c \
		ft_printf/conv_c.c \
		ft_printf/conv_single.c \
		ft_printf/ft_printf.c \
		ft_printf/flags.c \
		ft_printf/flags_2.c \
		ft_printf/conv_p.c \
		ft_printf/itoa_hex.c \
		ft_printf/conv_d.c \
		ft_printf/lenmod.c \
		ft_printf/itoa_d.c \
		ft_printf/prefix_suffix.c \
		ft_printf/conv_u.c \
		ft_printf/itoa_u.c \
		ft_printf/conv_o.c \
		ft_printf/itoa_octal.c \
		ft_printf/conv_x.c \
		ft_printf/conv_f.c \
		ft_printf/ftos.c \
		ft_printf/d_len.c

INC = include/ft_printf.h \
	include/libft.h
	
FILES = $(LIBFT) $(PRINTF)

OBJ = *.o

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(FILES) $(INC)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
