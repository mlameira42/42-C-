SRC = PhoneBook.cpp

OBJ = $(SRC:.cpp=.opp)

COMP = c++

FLGS = -Wall -Wextra -Werror -std=c++98

NAME = PhoneBook

%.opp : %.cpp
	$(COMP) $(FLGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(COMP) $(FLGS) $(OBJ) -o $(NAME)

clean :
	rm -fr $(NAME).opp

fclean : clean
	rm -fr $(NAME)

re : fclean all