COMPILER = c++
CFLAGS = -Wall -Werror -Wsign-conversion -Wextra -pedantic -g -std=c++98 -fsanitize=address 

SRC_FILES = main.cpp 
OBJ_FILES = $(SRC_FILES:.cpp=.o)

NAME = brain

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(COMPILER) $(FLAGS) $(OBJ_FILES) -o $(NAME)

%.o: %.cpp 
	$(COMPILER) $(FLAGS) -c $< -o $@	

clean:	
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re