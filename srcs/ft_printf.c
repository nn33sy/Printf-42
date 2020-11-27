
#include "libft.h"
#include "libftprintf.h"


int ft_print_argument(const char *format, va_list ap, t_param *param)
{
	t_argument *arg;
	t_chain *chain;
	int	len;

	chain = (t_chain *)malloc(sizeof(t_chain));
	chain->chain_print = NULL;
	chain->chain_arg = NULL;
	arg = (t_argument*)malloc(sizeof(t_argument));
	ft_initialize_argument(format, arg, param);
	if (arg == 0)
		return (-1);
	switch(arg->type){
		case 's':
			ft_s(arg, chain, ap);
			break;
		case 'c':
			ft_c(arg, chain, ap);
			break;
		case 'd':
			ft_d(arg, chain, ap);
			break;
		case 'i':
			ft_d(arg, chain, ap);
			break;
		case 'u':
			ft_u(arg, chain, ap);
			break;
		case 'x':
			ft_x(arg,chain,ap);
			break;

		case 'X':
			ft_xmaj(arg,chain,ap);
			break;
		case 'p':
			ft_p(arg, chain, ap);
			break;
		}
	if (chain->chain_print != NULL)
		len = ft_strlen(chain->chain_print);
	else
		len = -1;
	free(arg);
	free(chain);
return(len);
}


int	ft_printf(const char * format,...)
{
	va_list ap;
	t_param *param;
	int	res;
	int	inter;

	va_start(ap,format);
	param = malloc(sizeof(t_param));
	ft_initialize_param(param);
	res = 0;
	inter = 0;
	while (*format)
	{
		if (*format == '%')
		{
			inter = ft_print_argument(format,ap,param);
			if (inter != -1)
					while (ft_comp(param->type_char, *format) == 0)					
						format++;	
			else
					ft_putchar_fd(*format,1);
		}
		else
		{
			ft_putchar_fd(*format,1);
			inter++;
		}
		format++;
		inter += res;
	}
	va_end(ap);
return(inter);
}


