# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkimmina <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/09 13:15:40 by jkimmina          #+#    #+#              #
#    Updated: 2018/08/09 15:09:02 by jkimmina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		ft_ssl

SRC =		./src/ssl.c		\
			./src/md5.c

OBJ = $(SRC:.c=.o)

HEADER=	.

FLAGS = -Wall -Werror -Wextra

LIBFT = ./libft/libft.a
LIBFTLINK = -L./libft/ -lft

.PHONY: all clean fclean re

all: $(NAME)

libft: $(LIBFT)

$(OBJ): $(SRC)
	gcc $(FLAGS) -c $(SRC) -I$(HEADER)
	@mv *.o 	./src/

$(LIBFT):
	make -C ./libft

$(NAME): $(LIBFT) $(OBJ)
	gcc $(OBJ) -o $(NAME) $(LIBFTLINK)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)
	make fclean -C ./libft/

re: fclean all
