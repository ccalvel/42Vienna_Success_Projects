# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccaldero <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 16:00:37 by ccaldero          #+#    #+#              #
#    Updated: 2022/11/14 16:00:45 by ccaldero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 

CFLAGS = -Wall -Werror -Wextra

SOURCES = ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memmove.c\
		ft_strlcat.c \
		ft_toupper.c\
		ft_tolower.c \
		ft_strchr.c \
		ft_strncmp.c \
		ft_strlcpy.c \
		ft_atoi.c \
		ft_memcpy.c \
		ft_calloc.c \
		ft_itoa.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strmapi.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_strtrim.c \
	    ft_strrchr.c \
		ft_memchr.c \
		ft_split.c \
		ft_memcmp.c \
		ft_strnstr.c \

OBJECTS = $(SOURCES:.c=.o)

$(NAME): all

all: 
	cc $(CFLAGS) -c $(SOURCES)
	ar rcs $(NAME) $(OBJECTS)

clean: 
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
