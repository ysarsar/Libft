# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makfile                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysarsar <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/13 18:02:36 by ysarsar           #+#    #+#              #
#    Updated: 2018/10/21 04:01:19 by ysarsar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRCS=*.c

OBJECTS=*.o

INCLUDES=./

all: $(NAME)

$(NAME): $(SRCS) libft.h
	@gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
