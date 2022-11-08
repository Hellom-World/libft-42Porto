# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: heolivei <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 13:15:43 by heolivei          #+#    #+#              #
#    Updated: 2022/11/08 18:28:12 by heolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_atoi.c ft_strlen.c ft_memcpy.c
OBJS			= $(SRCS:.c=.o)
CC			= cc -c
CFLAGS			= -Wall -Wextra -Werror -I
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
