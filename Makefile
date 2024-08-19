NAME = libmini_math.a

CFLAGS = -Wall -Wextra -Werror
# CFLAGS := -fsanitize=address
# CFLAGS += -Ofast
# CFLAGS += -fPIE
# CFLAGS := -g

CC = cc

DIR_SRC = src
DIR_OBJ = obj
DIR_INCLUDE = include

INCLUDE = -I./$(DIR_INCLUDE)


SRC = init_matrixes.c matrix_tools_2.c quaternion_functions.c vector_functions_1.c vector_functions_3.c \
	math_tools.c matrix_tools_1.c vector_functions_2.c get_rgb.c

vpath %.c $(DIR_SRC)

OBJ = ${addprefix ${DIR_OBJ}/, ${SRC:.c=.o}}

all: ${NAME}

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)

${OBJ}: ${DIR_OBJ}/%.o: %.c
	@mkdir -p ${@D}
	$(CC) ${CFLAGS} ${INCLUDE} -c $< -o $@

debug: CFLAGS += -g
debug: re

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re  debug
