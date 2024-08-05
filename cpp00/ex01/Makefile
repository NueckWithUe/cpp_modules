NAME	=	phonebook
CPP		=	c++
CPFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC		=	main.cpp \
			PhoneBook.cpp \
			Contact.cpp

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