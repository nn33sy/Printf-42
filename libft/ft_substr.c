#include "libft.h"
char *ft_substr(char const *s, unsigned int start,int len)
{
	char	*sub;
	unsigned int	i;
	int	j;
	
	if (s == NULL )
		return (NULL);
	sub = (char*)malloc(sizeof(char) * (len + 1));
	if (sub == 0)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
	{
		sub[0]= '\0';
		return(sub);
	}
	i = start;
	j = 0;
	while (i != start + len && s[i] != '\0' )
	{
		sub[j] = s[i];
		i++;
		j++;
	}
	sub[j] = '\0';
	return (sub);	
}
