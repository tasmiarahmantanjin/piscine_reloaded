# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trahman <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/08 20:11:46 by trahman           #+#    #+#              #
#    Updated: 2020/06/09 16:34:00 by trahman          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
COMPILE = gcc -c -Wall -Wextra -Werror
SRC = ft_display_file.c
OBJECTS = ft_display_file.o

all: create

create:
	$(COMPILE) $(SRC)
	gcc -o $(NAME) $(OBJECTS)
clean:
	/bin/rm -f ft_display_file.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
