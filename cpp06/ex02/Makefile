NAME	=	identifyRealType
CPP		=	c++
CPFLAGS	=	-Wall -Wextra -Werror

SRC		=	main.cpp \
			Base.cpp \
			A.cpp\
			B.cpp\
			C.cpp

OBJ		=	$(addprefix obj/, $(SRC:%.cpp=%.o))

obj/%.o:	%.cpp
			@mkdir -p obj/
			$(CPP) $(CPFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CPP) $(CPFLAGS) $(OBJ) -o $(NAME)

clean:
			rm -rf obj/

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re