
#include "libft.h"
#include "libftprintf.h"
/*
int ft_putnbr_length(long n)
{
	int count;

	count = 0;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	if (n < 10)
		count ++;
	else
		count += 1 + ft_putnbr_length(n / 10);
		
}

void ft_u(t_argument *arg, t_chain *chain, va_list ap)
{
}
void ft_d(t_argument *arg, t_chain *chain, va_list ap)
{
	chain->chain_arg = ft_integer(va_arg(ap,int));
}
void ft_s(t_argument *arg, t_chain *chain, va_list ap)
{
	chain->chain_arg = va_arg(ap, char *);
	chain->print = chain->arg;
}
*/

void ft_p(t_argument *arg, t_chain *chain, va_list ap)
{

	void *ptn;
	ptn = va_arg(ap,int);
	unsigned char *chaine;
	chaine =(unsigned char *)ptn;
	printf("yolo :%s",chaine);
		
	
}
void ft_print_argument(const char * restrict format, va_list ap, t_param *param)
{
	t_argument *arg;
	t_chain *chain;

	chain = (t_chain *)malloc(sizeof(t_chain));
	arg = (t_argument*)malloc(sizeof(t_argument));
	 ft_initialize_argument(format, arg, param);
	ft_p(arg,chain,ap);
/*	switch(arg->type){
		case 's':
			ft_string(arg,chain,ap);
			break;
		case 'd':*/
			
	
	
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


