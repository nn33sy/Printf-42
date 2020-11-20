#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	char c;

	if (s !=NULL)
	{
	ft_putstr_fd(s,fd);
	c = 10;
	ft_putchar_fd(c,fd);
	}
}
