SRCS	= ft_atoi.c \
ft_bzero.c \
ft_calloc.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_memccpy.c \
ft_memchr.c \
ft_memcmp.c \
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
ft_strjoin.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_itoa.c \
ft_substr.c \
ft_strmapi.c \
ft_strtrim.c \
ft_split.c \
ft_strnew.c

SRCSB	= ft_lstnew.c \
ft_lstsize.c \
ft_lstlast.c \
ft_lstadd_front.c \
ft_lstadd_back.c \
ft_lstdelone.c \
ft_lstclear.c \
ft_lstiter.c \
ft_lstmap.c

OBJS	= ${SRCS:.c=.o}

OBJSB	= ${SRCSB:.c=.o}

NAME	= libft.a

$(NAME):	${OBJS}
		@ar rcs ${NAME} ${OBJS}
		@echo "\n La vie passe, la moulinette trepasse"

%.o: 		%.c
		gcc -Wall -Werror -Wextra -c $< -o $(<:.c=.o)

all:		${NAME} 

bonus:		${OBJSB}
		@ar rcs ${NAME} ${OBJSB}
		@echo "\n Une illusion de moins, c'est une verite en plus"

clean:		
		rm -f ${OBJS}
		rm -f ${OBJSB}

fclean:
		rm -f ${OBJS}
		rm -f ${OBJSB}
		rm -f ${NAME}

re:		fclean all

.PHONY:	bonus all clean fclean re
