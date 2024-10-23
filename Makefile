# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afogonca <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/21 14:29:51 by afogonca          #+#    #+#              #
#    Updated: 2024/10/23 10:31:16 by afogonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compile
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

# Files

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
      ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_substr.c \
	  ft_strjoin.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c

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
