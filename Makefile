NAME = libft.a
SOURCES = \
    ft_strlen.c \
    ft_isdigit.c \
    ft_isprint.c \
    ft_isalpha.c \
    ft_isascii.c \
    ft_toupper.c \
    ft_tolower.c \
    ft_strncmp.c \
    ft_isalnum.c \
    ft_memset.c \
    ft_bzero.c \
    ft_atoi.c \
    ft_calloc.c \
    ft_memchr.c \
    ft_memcmp.c \
    ft_memcpy.c \
    ft_memmove.c \
    ft_strchr.c \
    ft_strdup.c \
    ft_strlcat.c \
    ft_strlcpy.c \
    ft_strnstr.c \
    ft_strrchr.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \

OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -rcs $@ $^

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
 