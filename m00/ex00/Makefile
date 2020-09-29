# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: novan-ve <novan-ve@student.codam.n>          +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/12 19:35:01 by novan-ve      #+#    #+#                  #
#    Updated: 2020/09/29 12:25:43 by novan-ve      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = /usr/bin/clang++

CFLAGS = -Wall -Werror -Wextra

OBJ = megaphone.o

%.o: %.cpp
	$(CC) -c $^ $(CFLAGS)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
