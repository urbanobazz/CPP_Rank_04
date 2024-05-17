NAME = phonebook
CX = g++
CFLAGS  = -Wall -Wextra -Werror -std=c++98
OBJDIR = obj
OBJ = $(SRC:%.cpp=$(OBJDIR)/%.o)
SRC =	contact.class.cpp\
		phone_book.class.cpp\
		main.cpp

all: $(NAME)

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(OBJDIR)
	@$(CX) $(CFLAGS) -o $@ -c $< && printf "Compiling: $(notdir $<)\n"

$(NAME): $(OBJ)
	@$(CX) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@-rm $(NAME)

re: clean all
