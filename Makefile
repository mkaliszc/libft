CC = gcc -Wall -Wextra -Werror
OBJS = ${SRCS:.c=.o}
NAME = libft.a
SRC	=	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \

HEADER = includes/

all:	${NAME}

%.o:	%.c
		${CC} -I ${HEADER} -c $< -o $@

${NAME}:	${OBJS}
		ar -rcs ${NAME} ${OBJS}

clean:
		rm -f ${OBJS}
	
fclean: clean
		rm -f ${NAME}

re: fclean all
