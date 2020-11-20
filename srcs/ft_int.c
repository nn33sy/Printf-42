#include "libft.h"
#include "libftprintf.h"
char *ft_integer(int n)
{
	long n2;
	int length;
	char *chain;

	n2 = (long)n;
	length = ft_putnbr_length(n2);
	chain = (char *)malloc(sizeof(char) * (length + 1));
	ft_putnbr_ope(n, chain);
	if (n > 0)
		ft_swap_chain(chain, length);
	else
		ft_swap_chain(&chain[1], length - 1);
	return(chain);
}

/*int main()
{
	char *chain;
	chain = ft_integer(2147483647);
	printf("%s",chain);
}*/
