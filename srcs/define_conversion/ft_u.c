#include "libft.h"
#include "libftprintf.h"

void	ft_u(t_argument *arg, t_chain *chain, va_list ap)
{
	long long	n;

	n = (unsigned int)va_arg(ap, int);
	if (n == 0 && arg->prec == 0)
		{
			chain->chain_print = (char*)malloc(sizeof(char) * 1);
			chain->chain_print[0] = '\0';
			return ;
		}
	chain->chain_arg = ft_itoa_long(n);
	ft_ope_nb(arg, chain);
	if (n < 0)
		ft_swap_minus(chain->chain_print);
	ft_putstr_fd(chain->chain_print, 1);
}
