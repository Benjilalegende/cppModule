NAME        = ex01
CC            = c++
AR            = ar rcs
RM            = rm -f
CFLAGS        = -Wall -Wextra -Werror -std=c++98

SRC_ex01    = constructor.cpp get_info_contacts.cpp main.cpp search_contact.cpp

all: $(NAME)

SRC           = $(SRC_ex01)

OBJ            = $(SRC:%.cpp=%.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(PRINTF) $(CFLAGS) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
