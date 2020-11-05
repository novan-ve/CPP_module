# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: novan-ve <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/05 13:20:46 by novan-ve      #+#    #+#                  #
#    Updated: 2020/11/05 13:20:46 by novan-ve      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = iter

CC = clang++

CFLAGS = -Wall -Werror -Wextra

OBJ = iter.o

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