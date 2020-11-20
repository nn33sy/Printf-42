static int ft_checkorder_base(int  n, int len)
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
	while (n2 / len != 0)
	{
		order++;
		n2 /= len;
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

char *ft_itoa_base(int n, char *base)
{
	char *s;
	int order;
	int i;
	long	n2;
	int	len;

	n2 = (long)n;
	i = 0;
	len = 16;
	order = ft_checkorder_base(n2,len);
	s = (char*)malloc(sizeof(char) * (order + 1));
	if (s == 0)
		return (0);
	if (n == 0)
	{
		s[i]= base[0];
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
		s[i] = base[n2 % 16];
		n2 /= len;
		i++;
	};
	s[i] = '\0';
	ft_swap(s,n, order);
	return (s);
}
int main()
{
	printf("%s",ft_itoa_base(10217,"0123456789abcdef"));
}
