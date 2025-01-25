NAME	=	phonebook.app
O		=	obj
SRC		=	*.cpp
INCS	=	*.hpp
OBJ		=	$(SRC:*/%.cpp=$O/%.o)
CC		=	c++
CFLAGS	=	-Wall -Werror -Wextra -std=c++98 -I*hpp
LDFLAGS	=

all: $(NAME)

$O:
	@mkdir -p $O

$O/%.o: $S/%.cpp Makefile $(INCS) | $O
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(LDFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rdf $O

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
