COMPILER = c++
CFLAGS = -Wall -Werror -Wsign-conversion -Wextra -pedantic -g -std=c++98 \
		-Wshadow -Wno-shadow -fsanitize=address 

# directories
SRC_DIR = src/
INC_DIR = includes/
OBJ_DIR = obj/

# files
SRC_FILES = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
HEADERS = Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp

# derived variables
SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ = $(addprefix $(OBJ_DIR), $(SRC_FILES:.cpp=.o))
INCLUDES = -I$(INC_DIR)

NAME = Animal

# targets
all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILER) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp $(addprefix $(INC_DIR), $(HEADERS))
	mkdir -p $(OBJ_DIR)
	$(COMPILER) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
