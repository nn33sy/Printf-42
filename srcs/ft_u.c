#include "libft.h"
#include "libftprintf.h"

char *ft_unsignedint(unsigned int n)
{
        long n2;
        int length;
        char *chain;

        n2 = (long)n;
        length = ft_putnbr_length(n2);
        chain = (char *)malloc(sizeof(char) * (length + 1));
        ft_putnbr_ope(n, chain);
        ft_swap_chain(chain, length);
        return(chain);

}

