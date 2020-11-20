
#include "libft.h"
#include "libftprintf.h"

void ft_s(t_argument *arg, t_chain *chain, va_list ap)
{
	chain->chain_arg = va_arg(ap, char *);
	ft_putstr_fd(chain->chain_arg, 1);
}

void ft_c(t_argument *arg, t_chain *chain, va_list ap)
{
	chain->chain_arg = (char*)malloc((sizeof(char) * 2));
	chain->chain_arg[0] = va_arg(ap, int);
	chain->chain_arg[1] = '\0';
	ft_putstr_fd(chain->chain_arg, 1);
}

void ft_d(t_argument *arg, t_chain *chain, va_list ap)
{
	chain->chain_arg = ft_itoa_long((va_arg(ap, long)));
	ft_putstr_fd(chain->chain_arg, 1);
}

void ft_x(t_argument *arg, t_chain *chain, va_list ap)
{
	chain->chain_arg = ft_itoa_base(va_arg(ap, long long), "0123456789abcdef");
	ft_putstr_fd(chain->chain_arg, 1);	
}
void ft_X(t_argument *arg, t_chain *chain, va_list ap)
{
	chain->chain_arg = ft_itoa_base(va_arg(ap, long long), "0123456789ABCDEF");
	ft_putstr_fd(chain->chain_arg, 1);
}

void ft_p(t_argument *arg, t_chain *chain, va_list ap)
{

	void *ptn;
	ptn = va_arg(ap,void *);
	unsigned long ad;
	ad =(unsigned long)ptn;
//	printf("hey   %u  ",ad);
	chain->chain_arg = ft_strdup("0x");
	char *chain_inter;
	chain_inter =ft_itoa_base(ad,"0123456789abcdef");
	ft_strlcat(chain->chain_arg, chain_inter, 10 + ft_strlen(chain_inter));
	free(chain_inter);
	ft_putstr_fd(chain->chain_arg, 1);
	
}
void ft_print_argument(const char * restrict format, va_list ap, t_param *param)
{
	t_argument *arg;
	t_chain *chain;

	chain = (t_chain *)malloc(sizeof(t_chain));
	arg = (t_argument*)malloc(sizeof(t_argument));
	ft_initialize_argument(format, arg, param);
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
			ft_d(arg, chain, ap);
			break;
		case 'x':
			ft_x(arg,chain,ap);
			break;

		case 'X':
			ft_X(arg,chain,ap);
			break;
		case 'p':
			ft_p(arg, chain, ap);
			break;
		}
	
}


int	ft_printf2(const char * restrict format,...)
{
	va_list ap;
	t_param *param;
	
	char	c;

	va_start(ap,format);
	param = malloc(sizeof(t_param));
	ft_initialize_param(param);
	while (*format)
	{
		if (*format == '%')
			ft_print_argument(format,ap,param);
		//	printf("ok");
		else
			ft_putchar_fd(*format,1);
		format++;
	}
	va_end(ap);
return(1);
}


