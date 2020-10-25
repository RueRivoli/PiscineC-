NAME	= megaphone

SRC		= megaphone.cpp
CFLAG	= -Wall -Wextra -Werror

.SILENT:

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(CFLAG) $(SRC) $^ -o $(NAME)
	printf '\033[32m[ ✔ ] %s\n\033[0m' "Created megaphone"

./objects/%.o: ./sources/%.cpp
	mkdir -p objects
	clang++ -c $< -o $@

clean:
	rm -rf objects
	/bin/rm -f *.o
	/bin/rm -rf ./objects/*.o
	printf '\033[31m[ ✔ ] %s\n\033[0m' "Cleaned megaphone"

fclean: clean
	/bin/rm -f $(NAME)
	printf '\033[31m[ ✔ ] %s\n\033[0m' "Fcleaned megpahone"

re: fclean all

.PHONY: clean fclean re all test