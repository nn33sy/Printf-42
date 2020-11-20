#include "libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
	char	*chain;
	size_t	i;
	
	chain = (char*)s;
	i = 0;
	while (chain[i] != '\0' && i < n)
	{
		if (c == chain[i])
			return(&chain[i]);
		i++;
	}
	if (c == 0)
		return(&chain[i]);
	return(0);
}
