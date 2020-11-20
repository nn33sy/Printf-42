void	ft_bzero(void *s, int n)
{
	char	*str;
	int	i;

	i = 0;
	if (n > 0)
	{
		str = (char*)s;
		while (i < n )
		{
			str[i] =0;
			i++;
		}
	}
}

