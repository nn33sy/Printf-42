#include "libft.h"
static int ft_checkorder(int  n) 
{
	int	order;
	long	n2;
	
	order = 0;
	if (n == 0)
		return (2);
	if (n < 0)
	{
		n2 =(long)(-n);
		order++;
	}
	else
		n2 = n;
	while (n2 != 0)
	{
		order++;
		n2 /= 10;
	}
	return (order + 1);
	  
}
static void ft_swap(char *s, int n, int order)
{
	char inter;
	
	if (n < 0)
		ft_swap(&s[1],1, order - 1);
	else
	{
	if (order > 1)
	{
		inter = s[0];
		s[0] = s[order - 1];
		s[order - 1] = inter;
		ft_swap(&s[1], n, order - 2); 
	}
	}
}
char *ft_itoa(int n)
{
	char *s;
	int order;
	int i;
	long	n2;

	n2 = (long)n;	
	i = 0;
	order = ft_checkorder(n2);
	s = (char*)malloc(sizeof(char) * order);
	if (s == 0)
		return (0);
	if (n == 0)
	{
		s[i]= '0';
		i++;
	}
	if (n2 < 0)
	{
		s[i] = '-';
		i++;
		n2 *= -1;		
	}
	while (n2 != 0)
	{
		s[i] = (n2 % 10) + '0';
		n2 /= 10;
		i++;
	};
	s[i] = '\0';
	ft_swap(s,n, order - 1);
	return (s);
}
	
