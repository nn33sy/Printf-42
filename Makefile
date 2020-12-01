NAME=libftprintf.a
CC=gcc
CFLAGS=-Wall -Wextra -Werror
OBJ = $(SRCS:.c=.o)

SRCS = basic_function/ft_check_star.c \
      basic_function/ft_comp.c       \
      basic_function/ft_itoa_base.c  \
      basic_function/ft_free.c  \
      basic_function/ft_itoa_long.c  \
      basic_function/ft_swap_minus.c \
      define_argument/ft_initialize_param.c \
      define_conversion/ft_c.c \
      define_conversion/ft_d.c \
      define_conversion/ft_p.c \
      define_conversion/ft_s.c \
      define_conversion/ft_x.c \
      define_conversion/ft_u.c \
      define_conversion/ft_pmaj.c \
      define_conversion/ft_xmaj.c \
      define_argument/ft_check_flags.c \
      define_argument/ft_copyarg.c \
      define_argument/ft_flags.c \
      define_argument/ft_initialize_argument.c \
      define_argument/ft_length_arg.c \
      define_argument/ft_prec.c \
      define_argument/ft_type.c \
      define_argument/ft_width.c \
      padandprec/ft_ope_nb.c \
      padandprec/ft_prec_nb.c \
      padandprec/ft_width_nb.c \
      padandprec/ft_width_s_c.c\
      padandprec/ft_apply_s.c\
      ft_printf.c 

# COLORS
C_NO	=	"\033[00m"
C_OK	=	"\033[35m"
C_GOOD	=	"\033[32m"
C_ERROR	=	"\033[31m"
C_WARN	=	"\033[33m"

# DBG MESSAGE
SUCCESS	=	$(C_GOOD)SUCCESS$(C_NO)
OK		=	$(C_OK)OK$(C_NO)

all: $(NAME)

%.o: %.c
		@$(CC) -Iincludes $(CFLAGS) -c $< -o $@
		@echo "Linking" [ $< ] $(OK)

$(NAME): $(OBJ)
	@make -C libft/
	@cp libft/libft.a ./$(NAME)
	@ar rc $@ $^
	@echo "Compiling & indexing" [ $(NAME) ] $(SUCCESS)

clean:
	@make clean -C libft/
	@/bin/rm -f $(OBJ)
	@echo "[ft_printf] Removed object files!\n"

fclean: clean
	@/bin/rm -f $(NAME)
	@make fclean -C libft/
	@echo "Cleaning" [ $(NAME) ] $(OK)

re: fclean all

.PHONY: all clean fclean re test
