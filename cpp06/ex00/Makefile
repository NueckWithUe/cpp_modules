NAME	=	convert
CPP		=	c++
CPFLAGS	=	-Wall -Wextra -Werror -std=c++11

SRC		=	main.cpp \
			ScalarConverter.cpp

OBJ		=	$(addprefix obj/, $(SRC:%.cpp=%.o))

obj/%.o:	%.cpp
			@mkdir -p obj
			$(CPP) $(CPFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CPP) $(CPFLAGS) $(OBJ) -o $(NAME)

clean:
			rm -rf obj

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re