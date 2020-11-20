void *ft_memcpy(void *restrict dst, const void *restrict src, int n)
{
	char	*dst_2;
	char	*src_2;
	int	i;
	
        if (dst == 0  && src == 0)
		return (0);
	dst_2 = (char*)dst;
       	src_2 = (char*)src;	
	if (n > 0)
	{	
		i = 0;
		while (i < n)
		{
			dst_2[i] = src_2[i];
			i++;
		}
	}
	return (dst_2);
}

