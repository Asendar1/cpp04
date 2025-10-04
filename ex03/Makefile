SRCDIR = src
INCDIR = inc
OBJDIR = obj

CXX = c++ -Wall -Wextra -Werror -std=c++98 -I$(INCDIR)

SRC = AMateria.cpp \
	  Character.cpp \
	  Cure.cpp \
	  Ice.cpp \
	  MateriaSource.cpp \
	  main.cpp

OBJ = $(addprefix $(OBJDIR)/, $(SRC:.cpp=.o))

NAME = game

all :$(NAME)

$(NAME): $(OBJ)
	$(CXX) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	$(CXX) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
