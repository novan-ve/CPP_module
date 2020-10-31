# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: novan-ve <novan-ve@student.codam.n>          +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/31 09:26:01 by novan-ve      #+#    #+#                  #
#    Updated: 2020/10/31 09:26:17 by novan-ve      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = convert

CC = clang++

CFLAGS = -Wall -Werror -Wextra

DEPS = Convert.hpp

OBJ = main.o Convert.o

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
