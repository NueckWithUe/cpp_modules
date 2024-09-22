NAME	=	ex01
CPP		=	c++
CPFLAGS	=	-Wall -Wextra -Werror

SRC		=	main.cpp \
			Animal.cpp \
			Dog.cpp \
			Cat.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp \
			Brain.cpp
OBJ		=	$(addprefix obj/, $(SRC:%.cpp=%.o))

$(NAME):	$(OBJ)
			$(CPP) $(CPFLAGS) -fsanitize=address $(OBJ) -o $(NAME)

obj/%.o:	%.cpp
			@mkdir -p obj/
			$(CPP) $(CPFLAGS) -c $< -o $@

all:		$(NAME)

clean:
			rm -rf obj/

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re