SRCS	= ft_memset.c ft_memcpy.c ft_bzero.c ft_atoi.c ft_calloc.c ft_memmove.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_isalpha.c ft_isascii.c ft_isprint.c ft_isdigit.c ft_isalnum.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c  main.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC	= cc

CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
	rm -f ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
