COMPILER = c++
CFLAGS = -Wall -Werror -Wsign-conversion -Wextra -pedantic -g -std=c++98 -fsanitize=address 


SRC_FILES = main.cpp  Harl.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)
HEADERS = Harl.hpp  

NAME = harlFilter

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(COMPILER) $(CFLAGS) $(OBJ_FILES) -o $(NAME)

%.o: %.cpp 
	$(COMPILER) $(CFLAGS) -c $< -o $@	

clean:	
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re