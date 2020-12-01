
#include "libft.h"
#include "libftprintf.h"


static void ft_f(fct **ad,t_argument *arg, t_chain *chain, va_list ap)
{
	char	*index;
	int i;
	fct	*tab;

	tab = *ad;
	index =ft_strdup("scdiuxXpP");
	i=-1;
	while (++i < 9)
	{
		if (arg->type == index[i])
			{
				(*tab[i])(arg, chain, ap);
				return;
			}
	}
	free(index);
}

static void ft_tab(t_argument *arg, t_chain *chain, va_list ap)
{
	fct		*tab;

	tab =(fct*)malloc(sizeof(tab) * 10);
	tab[0] = &ft_s;
	tab[1] = &ft_c;
	tab[2] = &ft_d;
	tab[3] = &ft_d;
	tab[4] = &ft_u;
	tab[5] = &ft_x;
	tab[6] = &ft_xmaj;
	tab[7] = &ft_p;
	tab[8] = &ft_pmaj;
	ft_f(&tab,arg,chain,ap);
}

int ft_print_argument(const char *format, va_list ap, t_param *param)
{
	t_argument *arg;
	t_chain *chain;
	int	len;

	arg = (t_argument*)malloc(sizeof(t_argument));
	ft_initialize_argument(format, arg, param);
	if (arg->chain == NULL)
	{
		ft_free(arg, NULL);
		return(-1);
	}
	chain = (t_chain *)malloc(sizeof(t_chain));
	ft_tab(arg, chain, ap);
	if (chain->chain_print != NULL)
			len = ft_strlen(chain->chain_print);
	else
		len = -1;
	if (len != -1 && arg->space == 1)
		len--;
	ft_free(arg, chain);
return(len);
}

int	ft_printf(const char * format,...)
{
	va_list		ap;
	t_param		*param;
	int			res;
	int			inter;
	
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
				{
					format++;
					while (ft_comp(param->type_char, *format) == 0 && *format != '%')					
						format++;
				}
		}
		else
		{
			ft_putchar_fd(*format, 1);
			res++;
		}
		format++;
		res += inter;
	}
	va_end(ap);
	free(param->flags);
	free(param->type_char);
	free(param);
return(res);
}


