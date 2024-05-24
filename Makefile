# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 17:48:45 by rohoffma          #+#    #+#              #
#    Updated: 2024/05/21 13:33:38 by rohoffma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
#LDFLAGS = -lbsd
CFLAGS = -Wall -Wextra -Werror
SRCS = main.c \
       ../ft_isalpha.c test_isalpha.c \
       ../ft_isdigit.c test_isdigit.c \
       ../ft_isalnum.c test_isalnum.c \
       ../ft_isascii.c test_isascii.c \
       ../ft_isprint.c test_isprint.c \
       ../ft_strlen.c test_strlen.c \
       ../ft_memset.c test_memset.c \
       ../ft_bzero.c test_bzero.c \
       ../ft_memcpy.c test_memcpy.c \
       ../ft_memmove.c test_memmove.c \
       ../ft_strlcpy.c test_strlcpy.c \
       ../ft_strlcat.c test_strlcat.c \
       ../ft_toupper.c test_toupper.c \
       ../ft_tolower.c test_tolower.c \
       ../ft_strchr.c test_strchr.c \
       ../ft_strrchr.c test_strrchr.c \
       ../ft_strncmp.c test_strncmp.c \
       ../ft_memchr.c test_memchr.c \
       ../ft_memcmp.c test_memcmp.c \
       ../ft_strnstr.c test_strnstr.c \
       ../ft_atoi.c test_atoi.c \
       ../ft_calloc.c test_calloc.c \
       ../ft_strdup.c test_strdup.c \
       ../ft_substr.c test_substr.c \
       ../ft_strjoin.c test_strjoin.c \
       ../ft_strtrim.c test_strtrim.c \
       ../ft_split.c test_split.c \
       ../ft_itoa.c test_itoa.c \
       ../ft_strmapi.c test_strmapi.c \
       ../ft_striteri.c test_striteri.c \
       ../ft_putchar_fd.c test_putchar_fd.c \
       ../ft_putstr_fd.c test_putstr_fd.c \
       ../ft_putendl_fd.c test_putendl_fd.c \
       ../ft_putnbr_fd.c test_putnbr_fd.c
OBJS = $(SRCS:.c=.o)

NAME = libft_tests

all: $(NAME)

libft: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o libft $(LDFFLAGS)


$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBS) -lbsd
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
