NAME=libftprintf.a
CC=gcc
CFLAGS=-Wall -Wextra -Werror
OBJ = $(SRCS:.c=.o)

SRCS = srcs/basic_function/ft_check_star.c \
       srcs/basic_function/ft_comp.c       \
       srcs/basic_function/ft_itoa_base.c  \
       srcs/basic_function/ft_itoa_long.c  \
       srcs/basic_function/ft_swap_minus.c \
       srcs/define_argu/ft_initialize_param.c \
       srcs/define_conversion/ft_c.c \
       srcs/define_conversion/ft_d.c \
       srcs/define_conversion/ft_p.c \
       srcs/define_conversion/ft_s.c \
       srcs/define_conversion/ft_x.c \
       srcs/define_conversion/ft_u.c \
       srcs/define_conversion/ft_pmaj.c \
       srcs/define_conversion/ft_xmaj.c \
       srcs/define_struct/ft_check_flags.c \
       srcs/define_struct/ft_copyarg.c \
       srcs/define_struct/ft_flags.c \
       srcs/define_struct/ft_initialize_argument.c \
       srcs/define_struct/ft_length_arg.c \
       srcs/define_struct/ft_prec.c \
       srcs/define_struct/ft_type.c \
       srcs/define_struct/ft_width.c \
       srcs/padandprec/ft_ope_nb.c \
       srcs/padandprec/ft_prec_nb.c \
       srcs/padandprec/ft_width_nb.c \
       srcs/padandprec/ft_width_s_c.c\
       srcs/ft_printf.c 

C_OK		=		"\033[35m"
C_GOOD		=		"\033[32m"
C_NO		=		"\033[00m"

SUCCESS		=		$(C_GOOD)SUCCESS$(C_NO)
OK			=		$(C_OK)OK$(C_NO)
all: $(NAME)

%.o: %.c
		printf "[ft_printf] Compiling [.:]\r"
		$(CC) -Iincludes $(CFLAGS) -c $< -o $@
		printf "[ft_printf] Compiling [:.]\r"

$(NAME): $(OBJ)
	make -C libft/
	cp libft/libft.a ./$(NAME)
	ar rc $@ $^
	ranlib $@
	echo "Compiling & indexing" [ $(NAME) ] $(SUCCESS)

clean:
	@make clean -C libft/
	@/bin/rm -f $(OBJ)
	@printf "[ft_printf] Removed object files!\n"

fclean: clean
	@/bin/rm -f $(NAME)
	@make fclean -C libft/
	@echo "Cleaning" [ $(NAME) ] "..." $(OK)

re: fclean all

.PHONY: all clean fclean re test
