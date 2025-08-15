SRC = newZombie.cpp Zombie.cpp main.cpp randomChump.cpp

OBJ = $(SRC:.cpp=.opp)

COMP = c++

FLGS = -Wall -Wextra -Werror -std=c++98 -g

NAME = zombie

%.opp : %.cpp
	$(COMP) $(FLGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(COMP) $(FLGS) $(OBJ) -o $(NAME)

clean :
	rm -fr $(OBJ)

fclean : clean
	rm -fr $(NAME)

re : fclean all