NAME = contact

SRC = PhoneBook.cpp Contact.cpp Main.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

CFLAGS = -g3 -Wall -Wextra -Werror -std=c++98

RM = rm -rf

all : $(NAME)

.cpp.o :
		$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME) : $(OBJ) Makefile
		$(CC) $(CFLAGS) -o $(NAME) -g $(OBJ)

clean :
		$(RM) $(NAME) $(OBJ)

fclean : clean
		$(RM) $(NAME)

re : fclean allq

.PHONY : all clean fclean re