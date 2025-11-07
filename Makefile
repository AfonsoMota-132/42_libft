# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/24 18:53:43 by afogonca          #+#    #+#              #
#    Updated: 2025/03/07 10:32:10 by afogonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compile
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

# Files

BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	     ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

PRINTF = printf/ft_printf.c printf/ft_printfhex.c printf/ft_printfpointer.c \
		printf/ft_printfunbr.c printf/ft_printfnbr.c printf/ft_printfstr.c

GNL = gnl/get_next_line.c gnl/get_next_line_utils.c

MEM = $(addprefix mem/, ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c \
			ft_memcpy.c ft_memmove.c ft_memset.c)

IN_STR = $(addprefix in_str/, ft_strchr.c ft_strchr_len.c ft_strrchr.c \
			ft_strrchr_len.c ft_strnstr.c ft_str_not_chrlen.c)

IS_CHAR = $(addprefix is_char/, ft_isalnum.c ft_isalpha.c ft_isascii.c \
			ft_isdigit.c ft_islower.c ft_isupper.c)

STR_TO = $(addprefix str_to/, ft_tolower.c ft_toupper.c ft_str_tolower.c \
			ft_str_toupper.c)

STR_UTILS = $(addprefix str_utils/, ft_strcmp.c ft_strncmp.c ft_strlen.c)

STR = $(addprefix str/, ft_chrjoin.c ft_split.c ft_split_multi.c ft_strdup.c \
			ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strmapi.c \
			ft_strtrim.c ft_substr.c)

PRINT_FD = $(addprefix print_fd/, ft_putchar_fd.c ft_putstr_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c)

CONVERT = $(addprefix convert/, ft_atoi.c ft_atol.c ft_itoa.c)

SRCS =	$(IS_CHAR) $(MEM) $(IN_STR) $(STR_TO) $(STR_UTILS) $(STR) \
		$(PRINT_FD) $(CONVERT) \
		$(PRINTF) $(GNL)
# ft_itoa.c) 		ft_atoi.c \
# 		ft_putnbr_fd.c \

BONUS_OBJS = ${BONUS_SRCS:.c=.o}
OBJS = ${SRCS:.c=.o}
NAME = libft.a

# Rules

all: ${NAME}

bonus: ${OBJS} ${BONUS_OBJS}
	ar rc ${NAME} ${BONUS_OBJS} ${OBJS}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}	

clean:
	${RM} ${OBJS} ${BONUS_OBJS}

fclean: clean
		${RM} ${NAME}

re:	fclean all

.PHONY: all clean fclean re
