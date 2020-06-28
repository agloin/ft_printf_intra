
.PHONY: clean fclean re all print

OS := $(shell uname -s)
CC := gcc
FLAGS := -Wall -Wextra -Werror
NAME := libft.a

H := libft.h

SRC := \
memset bzero memcpy memccpy memmove memchr memcmp memalloc memdel \
atoi itoa itoa_base\
isalpha isdigit isalnum isascii isprint toupper tolower \
strlen strdup strcpy strncpy strcat strncat strlcat strchr strrchr strstr strnstr strcmp strncmp \
strnew strdel strclr striter striteri strmap strmapi strequ strnequ strsub strjoin strtrim strsplit \
putchar putstr putendl putnbr putchar_fd putstr_fd putendl_fd putnbr_fd \
lstnew lstdelone lstdel lstadd lstiter lstmap \
numlen strnew_size arrdel
SRC := $(addprefix ft_, $(addsuffix .c, $(SRC)))

OBJ := $(patsubst %.c, %.o, $(SRC))

ifeq ($(OS), Linux)

all: $(NAME)
$(NAME): $(SRC) $(H)
	@$(CC) $(FLAGS) -c $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "lib compiled" 

else ifeq ($(OS), Darwin)

all: $(NAME)
$(NAME): $(SRC) $(H)
	@$(CC) $(FLAGS) -I $(H) -c $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "lib compiled" 

endif
clean:
	@rm -f $(OBJ)
fclean: clean
	@rm -f $(OBJ)
	@rm -f $(NAME)
re: fclean all
