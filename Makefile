# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: heolivei <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 13:15:43 by heolivei          #+#    #+#              #
#    Updated: 2022/11/06 13:50:07 by heolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_atoi.c ft_strlen.c
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
