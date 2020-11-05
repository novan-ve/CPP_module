# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: novan-ve <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/05 12:43:29 by novan-ve      #+#    #+#                  #
#    Updated: 2020/11/05 12:43:32 by novan-ve      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = whatever

CC = clang++

CFLAGS = -Wall -Werror -Wextra

OBJ = whatever.o

%.o: %.cpp
	$(CC) -c $< $(CFLAGS)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
