CC		=	gcc $(FLAGS)
FLAGS	=	-Wall -Wextra -Werror
NAME	=	libft.a
INCLUDES=	./includes
SRCS	=	ft_atoi.c \
		ft_strlen.c \
		 ft_memset.c \
		 ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strncmp.c \
		ft_strdup.c  \
		ft_calloc.c  \
		ft_isalpha.c  \
		ft_isdigit.c  \
		ft_isalnum.c  \
		ft_isascii.c  \
		ft_isprint.c  \
		ft_toupper.c  \
		ft_tolower.c  \
		ft_strchr.c   \
		ft_strrchr.c  \
		ft_substr.c  \
		ft_strtrim.c  \
		ft_strjoin.c  \
		ft_itoa.c   \
		ft_strmapi.c \
		ft_lstnew.c  \
		ft_putchar_fd.c  \
		ft_putstr_fd.c   \
		ft_putendl_fd.c  \
		ft_putnbr_fd.c   \
		ft_lstdelone.c    \
		ft_lstadd_back.c  \
		ft_lstlast.c     \
		ft_lstsize.c       \
		ft_lstadd_front.c  \
		ft_lstiter.c     \
		ft_memchr.c  \
		ft_memcmp.c   \
		ft_lstclear.c  \
		ft_lstmap.c \
		ft_comp.c \
	
OBJS	=	$(SRCS:.c=.o)

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

$(NAME): $(OBJS)
	@ar rc $@ $^
	@ranlib $@
	@echo "Compiling & indexing" [ $(NAME) ] $(SUCCESS)

%.o: %.c
	@$(CC) -c -o $@ $< 
	@echo "Linking" [ $< ] $(OK)

clean:
	@rm -f $(OBJS)
	@echo "Cleaning" [ $(NAME) ] "..." $(OK)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
