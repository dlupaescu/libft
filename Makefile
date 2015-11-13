# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlupaesc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/05 13:30:40 by dlupaesc          #+#    #+#              #
#    Updated: 2015/11/12 17:17:50 by dlupaesc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_memset.c		\
	  ft_bzero.c		\
	  ft_memcpy.c		\
	  ft_memccpy.c		\
	  ft_memmove.c		\
	  ft_memchr.c		\
	  ft_memcmp.c		\
	  ft_strlen.c		\
	  ft_strdup.c		\
	  ft_strcpy.c		\
	  ft_strncpy.c		\
	  ft_strcat.c		\
	  ft_strncat.c		\
	  ft_strlcat.c

OUT = ft_memset.o		\
	  ft_bzero.o		\
	  ft_memcpy.o		\
	  ft_memccpy.o		\
	  ft_memmove.o		\
	  ft_memchr.o		\
	  ft_memcmp.o		\
	  ft_strlen.o		\
	  ft_strdup.o		\
	  ft_strcpy.o		\
	  ft_strncpy.o		\
	  ft_strcat.o		\
	  ft_strncat.o		\
	  ft_strlcat.o

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) -c $(SRC)
	@ar rc $(NAME) $(OUT)
	@ranlib $(NAME)

clean:
	@/bin/rm -rf $(OUT)

fclean: clean
	@/bin/rm -rf $(NAME)

re: fclean all
