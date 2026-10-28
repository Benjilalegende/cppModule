NAME        = Bureaucrat2
CC            = c++
AR            = ar rcs
RM            = rm -f
CFLAGS        = -Wall -Wextra -Werror -std=c++98

SRC    = main.cpp Bureaucrat.cpp Form.cpp

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
