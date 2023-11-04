CC = cc

CLFAGS = -Wall -Wextra -Werror

NAME = libft.a

MDTR_SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
            ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
            ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
            ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
            ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
            ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
            ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BNS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
            ft_lstdelone.c ft_lstclear.c  ft_lstiter.c 

MDTR_OBJ = $(MDTR_SRCS:.c=.o)

BNS_OBJ = $(BNS_SRCS:.c=.o)

all: $(NAME)

bonus:    $(MDTR_OBJ) $(BNS_OBJ)
	ar rcs $(NAME) $(MDTR_OBJ) $(BNS_OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(MDTR_OBJ)
	ar rcs $(NAME) $(MDTR_OBJ)

clean:
	rm -f $(MDTR_OBJ) $(BNS_OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
