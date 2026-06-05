
#####	CONFIG		############################################################
NAME		:= a.out
CFLAGS		= -Wall -Wextra -Werror -std=c++20

#####	SOURCES		############################################################
SRC			=	main.cpp \
			World.cpp \
			Entity.cpp \
			Grass.cpp \
			Salt.cpp \
			Sheep.cpp \
			Wolf.cpp
all:
	g++ ${CFLAGS} $(SRC) -o $(NAME)

sanitize:
	g++ ${CFLAGS} -g -fsanitize=address $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean re
