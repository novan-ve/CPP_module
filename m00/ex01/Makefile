# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: novan-ve <novan-ve@student.codam.n>          +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/16 15:00:01 by novan-ve      #+#    #+#                  #
#    Updated: 2020/08/16 15:06:43 by novan-ve      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = clang++

CFLAGS = -Wall -Werror -Wextra

OBJ = main.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
