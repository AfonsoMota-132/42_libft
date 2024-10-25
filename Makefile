# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/24 18:53:43 by afogonca          #+#    #+#              #
#    Updated: 2024/10/25 09:44:29 by afogonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compile
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

# Files

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
    	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_substr.c \
		ft_strjoin.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_atoi.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_itoa.c ft_split.c \
		ft_putnbr_fd.c ft_strncmp.c ft_strtrim.c ft_strdup.c ft_strchr.c

OBJS = ${SRCS:.c=.o}
NAME = libft.a

# Rules

all: ${NAME}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}	

clean:
	${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re:	fclean all

.PHONY: all clean fclean re
