# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mschumac <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/28 23:38:17 by mschumac          #+#    #+#              #
#    Updated: 2017/05/12 17:17:00 by mschumac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
COMPILER = clang
SOURCES = sources/ft_*.c
OBJECTS = $(SOURCES:.c=.o)
# prototypes for the library's functions
HEADERS = libft.h
COMPILER_FLAGS = -Wextra -Wall -Werror  
COMPILER_OPTIONS = -c -I$(HEADERS)
TEST_PATH = tests/
TESTS_SOURCE = \
				$(STRING) \
				$(MEMORY) \

TESTS = $(wildcard $(TESTS_SOURCE)*.c)
				# all other categories of functions

TESTING_FRAMEWORK = $(TESTS)/Unity/src/unity.c

# both in tests and in src, modules are categorized according to standard libc
STRING = string/

all: $(NAME)

$(NAME):
	@ echo "Compiling objects ..."
	$(COMPILER) $(COMPILER_FLAGS) -O2 $(COMPILER_OPTIONS) $(SOURCES) 
	@ echo "Bundling objects into library & creating index to speed up linking ..."
	ar -rcs $(NAME) ft_*.o 
	make clean

clean:
	@ echo "Deleting all object files ..."
	rm -rf ft_*.o 

fclean: clean
	@ echo "Deleting $(NAME) ..."
	rm -rf $(NAME)

re: fclean all

lint:
	norminette $(SOURCES)

test: re # e.g. always test with the newest version

%: %.c
	@ echo "Compiling Testsuite ..."
	# Take all c files and produce binaries of the same name
	# $@ filename of target 
	# $< is the name of the dependency (_test source)
	$(COMPILER) $(COMPILER_FLAGS) -g $< $(TESTING_FRAMEWORK) -I$(NAME) -o $@  
	@ echo "Running Testsuite ..."
	# execute all newly compiled test binaries
