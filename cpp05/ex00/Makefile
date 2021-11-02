NAME = yo
PATH_SRC = ./
PATH_OBJ = ./
PATH_INC = ./

CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =		AAnimal.cpp \
			Dog.cpp \
			Cat.cpp \
			Brain.cpp \
			main.cpp

OBJ = $(addprefix $(PATH_SRC), $(SRC:.cpp=.o))

.PHONY: clean fclean

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
