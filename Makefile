# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/26 16:24:29 by bahkaya           #+#    #+#              #
#    Updated: 2025/06/18 12:02:04 by bahkaya          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
P = program

SOURCE =    ft_atoi.c       \
			ft_bzero.c      \
			ft_calloc.c     \
			ft_isalnum.c    \
			ft_isalpha.c    \
			ft_isascii.c    \
			ft_isdigit.c    \
			ft_isprint.c    \
			ft_itoa.c       \
			ft_memchr.c     \
			ft_memcmp.c     \
			ft_memcpy.c     \
			ft_memmove.c    \
			ft_memset.c     \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c  \
			ft_putstr_fd.c  \
			ft_split.c      \
			ft_strchr.c     \
			ft_strdup.c     \
			ft_striteri.c   \
			ft_strjoin.c    \
			ft_strlcat.c    \
			ft_strlcpy.c    \
			ft_strlen.c     \
			ft_strmapi.c    \
			ft_strncmp.c    \
			ft_strnstr.c    \
			ft_strrchr.c    \
			ft_strtrim.c    \
			ft_substr.c     \
			ft_tolower.c    \
			ft_toupper.c

OBJECTS = $(SOURCE:.c=.o)

all: $(NAME)
$(NAME): $(OBJECTS)
	ar rc -o $(NAME) $(OBJECTS)


cc: $(P)
$(P): rft_memset.c
	$(CC) $(CFLAGS) -o $(P) rft_memset.c
run:
	./$(P)

	
clean:
	rm -rf $(OBJECTS)

fclean:	clean
	rm -rf $(NAME)


re: fclean all

vscode: 
	@code .


pclean: $(P)
	rm -rf $(P)

.PHONY: all clean fclean re
