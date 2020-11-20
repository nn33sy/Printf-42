#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
	int	len;
	char	*new;
	int	i;

	if (s == NULL) 
		return (NULL);
	len = ft_strlen(s);
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return(NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new[i] = f(i,s[i]);
		i++;
	}
	new[i] = '\0';
	return(new);
	
}
