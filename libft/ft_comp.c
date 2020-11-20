int ft_comp(char *a,char b)
{
	if (a == 0)
		return (0);
	while (*a != '\0')
	{
		if (*a == b)
			return (1);
		a++;
	}
	return (0);
}

