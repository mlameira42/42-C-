SRC = main.cpp  Fixed.cpp

OBJ = $(SRC:.cpp=.o)

COMP = c++

FLGS = -Wall -Wextra -Werror -std=c++98 -g

NAME = Fixed

all : $(NAME)

$(NAME) : $(OBJ)
	$(COMP) $(FLGS) $(OBJ) -o $(NAME)

clean :
	rm -fr $(OBJ)

fclean : clean
	rm -fr $(NAME)

re : fclean all