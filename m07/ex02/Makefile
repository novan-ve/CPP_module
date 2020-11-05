# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: novan-ve <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/05 14:04:59 by novan-ve      #+#    #+#                  #
#    Updated: 2020/11/05 14:04:59 by novan-ve      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = array

CC = clang++

CFLAGS = -Wall -Werror -Wextra

DEPS = Array.hpp

OBJ = main.o

%.o: %.cpp $(DEPS)
	$(CC) -c $< $(CFLAGS)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
