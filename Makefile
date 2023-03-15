##
## EPITECH PROJECT, 2022
## minishell1
## File description:
## Makefile for minishell1
##

SRC	=	sources/main.c

NAME	=	test

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-I./includes/ -I./lib/my/ -Wall -Wextra -I./lists/

TESTS =		tests/

TEST_OBJ = $(TESTS:.c=.o)

LIB_TEST = libutest.a

TEST_NAME = unit_tests

TEST_INCLUDE = -lcriterion --coverage

all: build

build: $(OBJ)
	make -C ./lib/my/
	$(CC) -o $(NAME) $(OBJ) ./lib/libmy.a -L -lmy

debug:	CFLAGS += -g3
debug:	build

unit_tests: fclean
		$(MAKE) -C ./lib/my
		$(CC) $(TESTS) ./lib/libmy.a $(TEST_INCLUDE) $(CFLAGS) -o $(TEST_NAME)

tests_run: unit_tests
			./$(TEST_NAME)
			gcovr

clean:
	make clean -C ./lib/my/
	rm -rf sources/*.o
	rm -rf sources/*~
	rm -rf lists/*.o
	rm -rf lists/*~
	rm -rf tests/*.o

fclean:	clean
	make fclean -C ./lib/my/
	rm -rf $(NAME)
	rm -rf $(TEST_NAME)

re:	fclean all

.PHONY:	all build debug clean fclean re
