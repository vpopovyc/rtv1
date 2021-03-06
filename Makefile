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

CORE = core/main.c core/setup.c core/handle_command.c core/intersections.c \
		core/pic_render.c core/normals.c core/phong.c core/trace.c \
		core/controller.c
UTILS = utils/vector.c utils/quaternion.c utils/color.c utils/quaternion_ext.c \
		utils/vector_ext_one.c utils/vector_ext_two.c
SDL2 = sdl2/init.c sdl2/set_pixel.c
GLOBALS = globals/globals.c globals/objects.c

SRC += $(CORE) $(PARSE) $(UTILS) $(SDL2) $(GLOBALS)

OBJ = $(SRC:.c=.o)

CC = clang
CCFLAGS = -Wall -Wextra -Werror -Winline -Rpass -Rpass-missed -Rpass-analysis

FRAMEWORKS = -F /Library/Frameworks -framework SDL2

SDLHEADER = -F /Library/Frameworks -I /Library/Frameworks/SDL2.framework/Headers/ 

LIBFT = libft/libft.a

LIBS += $(LIBFT)

all: $(EXEC)

$(EXEC): $(LIBS) $(OBJ)
	$(CC) $(CCFLAGS) $(FRAMEWORKS) $(SDLHEADER) $(LIBS) $(OBJ) -o $(EXEC)

$(LIBFT):
	make -C libft/ all

%.o: %.c
	$(CC) -g $(CCFLAGS) $(SDLHEADER) -o $@ -c $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(EXEC)

re: fclean all

libfclean:
	make -C libft/ fclean 

.phony: all clean fclean re libfclean
