SRC = main.cpp

OBJ = $(SRC:.cpp=.opp)

COMP = c++

FLGS = -Wall -Wextra -Werror -std=c++98

NAME = megaphone

%.opp : %.cpp
	$(COMP) $(FLGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(COMP) $(FLGS) $(OBJ) -o megaphone