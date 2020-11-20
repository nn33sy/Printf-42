#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	if (dest == NULL || src == NULL)
		return(0);
	while (src[count] != '\0')
		count++;
	i = 0;
	if (size == 0)
		return (count);
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}
/*
int main()
{
	char s1[] = "Hello world";
	char s2[] = "Yessysysy";
	printf("%d",ft_strlcpy(s1,s2,0));
}*/
