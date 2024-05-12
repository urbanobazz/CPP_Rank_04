NAME = ex00
CX = g++
CFLAGS  = -Wall -Wextra -Werror -std=c++98
SRC = ex00.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(OBJ): $(SRC)
	@$(CX) $(CFLAGS) -o $@ -c $< && printf "Compiling: $(notdir $<)\n"

$(NAME): $(OBJ)
	@$(CX) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	@-rm $(OBJ)

fclean: clean
	@-rm $(NAME)

re: clean all
