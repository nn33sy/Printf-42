char *ft_strnstr(const char *haystack, const char *needle, int len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (*needle == '\0')
		return (haystack);
	while ((haystack[i] != '\0') && (needle[j] != '\0') && i < len)
	{
		if (str[i] == to_find[j])
			j++;
		else if (j > 0)
			j = 0;
		i++;
	}
	if (j > 0)
		return (&str[i - j]);
	else
		return (0);
}
