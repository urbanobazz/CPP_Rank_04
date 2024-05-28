NAME = animal
CXX = c++
CFLAGS  = -Wall -Wextra -Werror -std=c++98 -g -Wshadow -Wno-shadow
OBJDIR = obj
OBJ = $(SRC:%.cpp=$(OBJDIR)/%.o)
SRC =	main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp

all: $(NAME)

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(OBJDIR)
	@$(CXX) $(CFLAGS) -o $@ -c $< && printf "Compiling: $(notdir $<)\n"

$(NAME): $(OBJ)
	@$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@-rm $(NAME)

re: clean all
