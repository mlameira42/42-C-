SRC = Account.cpp tests.cpp

OBJ = $(SRC:.cpp=.opp)

COMP = c++

FLGS = -Wall -Wextra -Werror -std=c++98 -g

NAME = log

%.opp : %.cpp
	$(COMP) $(FLGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(COMP) $(FLGS) $(OBJ) -o $(NAME)
	./$(NAME) > my.log

clean :
	rm -fr $(OBJ)

fclean : clean
	rm -fr $(NAME)
	rm my.log

re : fclean all