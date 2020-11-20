int	ft_strncmp(unsigned char *s1, unsigned char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i]) && (s2[i]) && (i < n - 1) && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
