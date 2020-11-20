#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		taille;
	char	*new;
	char	*debut;

	taille = ft_strlen(src);
	new = (char*)malloc(sizeof(char) * (taille + 1));
	if (new == 0)
		return (0);
	debut = new;
	while (*src != '\0')
	{
		*new = *src;
		new++;
		src++;
	}
	*new = '\0';
	return (debut);
}
/*
int main()
{
char s1[]= "";
char *s2;
s2 = ft_strdup(s1);
printf("%s\n",s2);
}*/
