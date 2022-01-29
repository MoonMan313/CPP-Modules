NAME = Materia

HEAD = Character.hpp Ice.hpp Cure.hpp AMateria.hpp ICharacter.hpp \
IMateriaSource.hpp  MateriaSource.hpp

SRC = AMateria.cpp Cure.cpp main.cpp MateriaSource.cpp \
Character.cpp Ice.cpp   

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@clang++ $(FLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp $(HEAD)
	@clang++ $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re