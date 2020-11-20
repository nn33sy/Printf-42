void *ft_memmove(void *dst, const void *src, int len)
{
	char	*dst_2;
	char	*src_2;
	int	i;
	
	dst_2 = (char*)dst;
	src_2 = (char*)src;
	i = len - 1;
	while (i >= 0)
	{
		dst_2[i] = src_2[i];
		i--;
	}
	return (dst_2);
}
/*
int main()
{
	char s1[]= "123456";
	char s2[] ="123456";
	printf("%s ",memmove(s1,s1+1,6));
	printf("%s",ft_memmove(s2,s1+1,6));
}*/
