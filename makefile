.PHONY: clean fclean re all printf

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
ft_strdel \
ft_strlen \
ft_numlen \
ft_bzero \
ft \atoi \
ft_smbu long_m_str long_math ft_array_mantisa
SRC := $(addsuffix .c, $(SRC))

# DIR_LIB := libft
# LIB_RULE = $(addsuffix .lib, $(DIR_LIB)/)
# LIB := $(addprefix $(DIR_LIB)/, libtf.a)

SRCS := $(addprefix $(DIR_SRC)/, $(SRC))
OBJS := $(addprefix $(DIR_OBJ)/, $(SRC:.c=.o))

# all: $(LIB_RULE) $(NAME) 
all: $(NAME) 

# %.lib:
	# @$(MAKE) -sC $(DIR_LIB)

$(DIR_OBJ)/%.o: $(DIR_SRC)/%.c
	@mkdir -p $(DIR_OBJ) 
	@$(CC) $(FLAGS) -o $@ -c $<

$(NAME): $(SRCS) $(OBJS) $(H)
	@cp libft/libft.a ./$(NAME)
	@ar rcs $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "libftprinf compiled"

clean:
	@rm -f $(OBJS)
	@rm -rf $(DIR_OBJ)
	# @$(MAKE) -sC $(DIR_LIB) clean

fclean: clean
	@rm -f $(NAME)
	# @$(MAKE) -sC $(DIR_LIB) fclean

re: fclean all
