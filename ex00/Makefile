# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: debion <debion@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/10 07:04:44 by debion            #+#    #+#              #
#    Updated: 2025/01/10 11:21:37 by timatias         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=megaphone
CC= c++
CFLAGS= -Wall -Wextra -Werror -std=c++98
LDFLAGS=
SRC=megaphone.cpp
O=obj
OBJ=$(SRC:%.cpp=$O/%.o)

all: $(NAME)

$O:
	@mkdir -p $@

$O/%.o: %.cpp | $O
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ) Makefile
	$(CC) $(LDFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rdf $O

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
.SILENT:
