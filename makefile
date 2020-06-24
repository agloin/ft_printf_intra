.PHONY: clean fclean re all printf

OS := $(shell uname -s)
CC := gcc
DIR_NAME := ./
NAME := $(addprefix $(DIR_NAME), libftprintf.a)
FLAGS := -Wall -Wextra -Werror

DIR_H := include
H := $(addprefix $(DIR_H)/, ft_printf.h)

DIR_SRC := src
DIR_OBJ := obj
SRC := \
ft_printf \
ft_itoabasex ft_str_sym_cmp \
ft_cast_size_di ft_cast_size_poxu ft_cast_size_float \
parse_chr parse_str parse_per parse_bit parse_bcolor parse_bdollar parse_float parse_dipoxu \
parse_num_spec parse_dipoxu_spec_cases parse_num parse_float_number parse_float_flag \
parse_specifiers parse_output is_specifers \
record_chr record_str record_bit record_per record_float \
ft_clean_struct ft_clean_mult \
ld_util \
ft_smbu long_m_str long_math ft_array_mantisa
SRC := $(addsuffix .c, $(SRC))

DIR_LIB := libft
LIB := $(addprefix $(DIR_LIB)/, libtf.a)

SRCS := $(addprefix $(DIR_SRC)/, $(SRC))
OBJS := $(addprefix $(DIR_OBJ)/, $(SRC:.c=.o))

ifeq ($(OS), Linux)
all: $(NAME) 
$(DIR_OBJ)/%.o: $(DIR_SRC)/%.c
	@mkdir -p $(DIR_OBJ) 
	@gcc $(FLAGS) -o $@ -c $<
$(NAME): $(SRCS) $(OBJS) $(H)
	@make -C $(DIR_LIB)
	@cp libft/libft.a ./$(NAME)
	@ar rcs $(NAME) $(OBJS)
	@ranlib $(NAME)
else ifeq ($(OS), Darwin)
all: $(NAME) 
$(DIR_OBJ)/%.o: $(DIR_SRC)/%.c
	@mkdir -p $(DIR_OBJ) 
	@gcc $(FLAGS) -o $@ -c $<
$(NAME): $(SRCS) $(OBJS) $(H)
	@make -C $(DIR_LIB)
	@cp libft/libft.a ./$(NAME)
	@ar rcs $(NAME) $(OBJS)
	@ranlib $(NAME)
endif
clean:
	@rm -f $(OBJS)
	@rm -rf $(DIR_OBJ)
	@make clean -C $(DIR_LIB)
fclean: clean
	@rm -f $(NAME)
	@make fclean -C $(DIR_LIB)
re: fclean all
