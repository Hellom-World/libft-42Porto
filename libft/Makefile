# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: heolivei <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 21:06:30 by heolivei          #+#    #+#              #
#    Updated: 2022/11/09 21:06:35 by heolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS			=	ft_atoi.c ft_strlen.c ft_memcpy.c ft_isalpha.c ft_isdigit.c
OBJS			= $(SRCS:.c=.o)
CC			= cc
CFLAGS			= -Wall -Wextra -Werror
LIBCR			= ar rcs
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
			cc -nostartfiles -shared -o libft.so $(OBJS)
