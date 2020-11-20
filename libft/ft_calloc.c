#include "libft.h"
void *ft_calloc(int count, int size)
{
	void	*chain;

	if (size == 0|| count == 0)
		{
			count = 1;
        		size = 1;
		}
	chain = malloc(size * count);
	if (chain == 0)
		return (0);
	ft_bzero(chain,(count *size));
	return(chain);
}
	
