# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: heolivei <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 21:06:30 by heolivei          #+#    #+#              #
#    Updated: 2022/11/17 14:48:55 by heolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS			=	ft_atoi.c ft_strlen.c ft_memcpy.c ft_isalpha.c \
				ft_isdigit.c ft_isalnum.c ft_isascii.c ft_memset.c \
				ft_bzero.c ft_memmove.c ft_memchr.c ft_memcmp.c \
				ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c \
			       	ft_strrchr.c ft_strncmp.c ft_strlcat
OBJS			= $(SRCS:.c=.o)
CC			= cc
CFLAGS			= -Wall -Wextra -Werror
LIBCR			= ar rc
RM			= rm -f

NAME			= libft.a

all:			$(NAME)

$(NAME):	$(OBJS) 
			$(LIBCR) $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)
fclean:			clean
			$(RM) $(NAME)

re:			fclean all

so:	
			$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
			gcc -nostartfiles -shared -o libft.so $(OBJS)
