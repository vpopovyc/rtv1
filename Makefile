# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/01 18:32:39 by vpopovyc          #+#    #+#              #
#    Updated: 2017/11/01 20:47:24 by vpopovyc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = rtv1

CORE = core/main.c
PARSE = parse/parse_init.c
SDL2 = sdl2/init.c

SRC += $(CORE) $(PARSE)

OBJ = $(SRC:.c=.o)

# HEADER = 

CC = clang
CCFLAGS = -Wall -Wextra -Werror -Winline

# FRAMEWORKS = -F ~/Library/Frameworks -framework SDL2

# SDLHEADER = -F ~/Library/Frameworks -I ~/Library/Frameworks/SDL2.framework/Headers/ 

LIBFT = libft/libft.a

LIBS += $(LIBFT)

all: $(EXEC)

$(EXEC): $(LIBS) $(OBJ)
	$(CC) $(CCFLAGS) $(LIBS) $(OBJ) -o $(EXEC)
#	$(CC) $(CCFLAGS) $(FRAMEWORKS) $(SDLHEADER) $(LIBS) $(OBJ) -o $(EXEC)

$(LIBFT):
	make -C libft/ all

%.o: %.c
	$(CC) -g $(CCFLAGS) -o $@ -c $<
	# $(CC) -g $(CCFLAGS) $(SDLHEADER) -o $@ -c $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(EXEC)

re: fclean all

libfclean:
	make -C libft/ fclean 

.phony: all clean fclean re libfclean
