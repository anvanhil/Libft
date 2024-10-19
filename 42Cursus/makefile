# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: placombe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/19 12:27:45 by placombe          #+#    #+#              #
#    Updated: 2024/10/19 12:50:15 by placombe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	ft_atoi.c  ft_bzero.c  ft_calloc.c  ft_isalnum.c  ft_isalpha.c  ft_isascii.c \
				ft_isdigit.c  ft_isprint.c  ft_memchr.c  ft_memcmp.c  ft_memcpy.c  ft_memmove.c \
				ft_memset.c  ft_strchr.c  ft_strdup.c  ft_strlcat.c ft_strlcpy.c  ft_strlen.c  ft_strncmp.c \
				ft_strnstr.c  ft_strrchr.c  ft_tolower.c  ft_toupper.c \

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
