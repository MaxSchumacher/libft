# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mschumac <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/28 23:38:17 by mschumac          #+#    #+#              #
#    Updated: 2017/06/14 23:28:48 by mschumac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	 = libft.a
OBJECTS_DIRECTORY = objects
COMPILER = clang
COMPILER_FLAGS = -Wextra -Wall -Werror
COMPILER_OPTIONS = -Iincludes -c

SOURCES	 =  ft_atoi.c \
			ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_islower.c \
			ft_isupper.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memalloc.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memdel.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strcat.c \
			ft_strchr.c \
			ft_strcmp.c \
			ft_strcpy.c \
			ft_strdup.c \
			ft_strlcat.c \
			ft_strlen.c \
			ft_strncat.c \
			ft_strncmp.c \
			ft_strncpy.c \
			ft_strnlen.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strstr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_strnew.c \
			ft_strdel.c \
			ft_strclr.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strequ.c \
			ft_strnequ.c \
			ft_strsub.c \
			ft_strjoin.c \
			ft_strtrim.c

OBJECTS = $(SOURCES:%.c=$(OBJECTS_DIRECTORY)/%.o)

all: $(NAME)

$(OBJECTS_DIRECTORY):
	mkdir -p $(OBJECTS_DIRECTORY)

$(OBJECTS_DIRECTORY)/%.o: %.c
	@ echo "Compiling objects ..."
	$(COMPILER) $(COMPILER_FLAGS) $(COMPILER_OPTIONS) $< -o $@

$(NAME): $(OBJECTS_DIRECTORY) $(OBJECTS)
	@ echo "Bundling objects into library & creating index to speed up linking ..."
	ar -rcs $(NAME) $(OBJECTS) 

clean:
	@ echo "Deleting all object files ..."
	rm -rf $(OBJECTS_DIRECTORY) 

fclean: clean
	@ echo "Deleting $(NAME) ..."
	rm -rf $(NAME)

re: fclean all

lint:
	norminette $(SOURCES) $(HEADER)
