NAME = phonebook
CX = c++
CFLAGS  = -Wall -Wextra -Werror -std=c++98
OBJDIR = obj
OBJ = $(SRC:%.cpp=$(OBJDIR)/%.o)
SRC =	Contact.cpp\
		PhoneBook.cpp\
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
