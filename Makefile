NAME=libftprintf.a
CC=gcc
CFLAGS=-Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	make re -C libft/
	gcc -Iincludes  srcs/*.c srcs/*/*.c *.c libft/libft.a
	./a.out

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
