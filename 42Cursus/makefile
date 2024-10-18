# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmancho <lmancho@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/15 14:13:16 by lmancho           #+#    #+#              #
#    Updated: 2024/10/18 15:14:08 by placombe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	src/ft_atoi.c  src/ft_bzero.c  src/ft_calloc.c  src/ft_isalnum.c  src/ft_isalpha.c  src/ft_isascii.c \
					 src/ft_isdigit.c  src/ft_isprint.c  src/ft_memchr.c  src/ft_memcmp.c  src/ft_memcpy.c  src/ft_memmove.c \
					src/ft_memset.c  src/ft_strchr.c  src/ft_strdup.c  src/ft_strlcat.c src/ft_strlcpy.c  src/ft_strlen.c  src/ft_strncmp.c \
					src/ft_strnstr.c  src/ft_strrchr.c  src/ft_tolower.c  src/ft_toupper.c \

OBJS		=	$(SRCS:.c=.o)

CC			= gcc


CFLAGS		= -Wall -Wextra -Werror -I.

NAME		= libft.a

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rsc $(NAME) $(OBJS)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
