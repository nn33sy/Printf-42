void *ft_memset(void *b, int c, int len)
{
	int		i;
	unsigned char	cbis;
	char 		*str;
	
	cbis = c;
	str = (char *)b;
	i = 0;
	while (i < len)
	{
		str[i] = cbis;
		i++;
	}
	return (str);
}

