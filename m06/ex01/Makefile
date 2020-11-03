# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: novan-ve <novan-ve@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/01 09:15:37 by novan-ve      #+#    #+#                  #
#    Updated: 2020/11/01 09:15:37 by novan-ve      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = serialize

CC = clang++

CFLAGS = -Wall -Werror -Wextra

OBJ = main.o

DEPS = Serialize.hpp

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
