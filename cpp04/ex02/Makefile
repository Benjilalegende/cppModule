NAME        = animals3
CC            = c++
AR            = ar rcs
RM            = rm -f
CFLAGS        = -Wall -Wextra -Werror -std=c++98

SRC    = Main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

all: $(NAME)

OBJ            = $(SRC:%.cpp=%.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
