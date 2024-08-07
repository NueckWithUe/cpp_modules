NAME	=	ex03
CPP		=	c++
CPFLAGS	=	-Wall -Wextra -Werror

SRC		=	main.cpp \
			HumanA.cpp \
			HumanB.cpp \
			Weapon.cpp
OBJ		=	$(addprefix obj/, $(SRC:%.cpp=%.o))

$(NAME):	$(OBJ)
			$(CPP) $(CPFLAGS) $(OBJ) -o $(NAME)

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