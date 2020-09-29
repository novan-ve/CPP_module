# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: novan-ve <novan-ve@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/22 13:24:41 by novan-ve      #+#    #+#                  #
#    Updated: 2020/09/27 13:46:54 by novan-ve      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = clang++

CFLAGS = -Wall -Werror -Wextra

DEPS = Contact.hpp Phonebook.hpp

OBJ = main.o Contact.o

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