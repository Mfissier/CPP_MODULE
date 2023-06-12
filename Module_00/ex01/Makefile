NAME = PhoneBook 

SRC	= main.cpp \
	  functions.cpp \
	  menu.cpp \
	  menu_add_functions.cpp \
	  utils.cpp

CC 	= c++

FLAGS = -std=c++98 -Wall -Wextra -Werror 

OBJS = $(SRC:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)
	./PhoneBook "" ""

all: $(NAME) $(OBJS)

%.o: %.c
		$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re