NAME = megaphone

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

CFLAGS = -g3 -Wall -Wextra -Werror -std=c++98

RM = rm -f

all : $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME) : $(OBJ) Makefile
	$(CC) $(CFLAGS) -o $(NAME) -g3 $(OBJ)

clean :
	$(RM) $(NAME) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re