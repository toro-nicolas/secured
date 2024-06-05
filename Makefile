##
## EPITECH PROJECT, 2023
## secured
## File description:
## The main Makefile of our project
##

NAME		=	libhashtable.a

BUILDDIR 	=	./build
SRCDIR		=	./src

SRCS		+=	hash.c
SRCS		+=	create_table.c
SRCS		+=	destroy_table.c
SRCS		+=	insert.c
SRCS		+=	delete.c
SRCS		+=	search.c
SRCS		+=	dump.c

OBJS     	=	$(addprefix $(BUILDDIR)/, $(notdir $(SRCS:.c=.o)))

CFLAGS		=	-Werror -Wextra -g3 -I./include/

LDFLAGS 	=	-L./lib/ -lmylist -lmy

all: create-build libs $(BUILDDIR) $(NAME)
	@echo -e "\033[1;33msecured compiled.\033[0m"

libs:
	@make --no-print-directory -C./lib/my
	@make --no-print-directory -C./lib/mylist
	@echo -e "\033[1;33mLibs made.\033[0m"

create-build:
	@mkdir -p $(BUILDDIR)

$(BUILDDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) $(LDFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@ar rc $(NAME) build/*.o
	@rm -rf ./lib/my/*.a
	@rm -rf ./lib/mylist/*.a
	@rm -rf ./lib/mycsfml/*.a

clean:
	@rm -rf $(BUILDDIR)
	@echo -e "\033[1;31mAll .o deleted.\033[0m"

fclean: clean
	@rm -rf ./lib/*.a
	@rm -rf unit_tests*
	@rm -rf tests/unit_tests*
	@rm -rf vgcore*
	@rm -rf *.log
	@rm -rf $(NAME)
	@echo -e "\033[1;31mProject cleaned.\033[0m"

re:	fclean all

test: all
	@$(CC) $(OBJS) src/main.c $(CFLAGS) $(LDFLAGS) -o secured
	@echo -e "\033[1;33mCompiled project test\033[0m"

run: fclean test
	@echo -e "\033[1;32mRunning project...\033[0m"
	@./secured

valgrind: re
	@valgrind -s ./$(NAME)

# Unit tests Makefile
unit_tests:
	@make unit_tests --no-print-directory -C./tests/

tests_run:
	@make tests_run --no-print-directory -C./tests/
	@gcovr
