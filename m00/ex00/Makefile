# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: novan-ve <novan-ve@student.codam.n>          +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/16 13:41:47 by novan-ve      #+#    #+#                  #
#    Updated: 2020/08/16 15:06:36 by novan-ve      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = clang++

CFLAGS = -Wall -Werror -Wextra

OBJ = megaphone.o

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
