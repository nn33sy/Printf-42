void *ft_memccpy(void *restrict dst, const void *restrict src, int c, int n)
{
	unsigned char	*dst_2;
	unsigned char	*src_2;
	unsigned char	c2;
	int	i;

	dst_2 = (unsigned char*)dst;
	src_2 = (unsigned char*)src;
	c2 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		dst_2[i] = src_2[i];
		if (c2 == src_2[i])
			return (&dst_2[i+1]);
		i++;	
	}
	return (0); 
}
/*
int main(int argc, char **argv)
{
	    const char * text = "Ceci est ma première phrase. Et ceci est ma seconde";
    int length = strlen( text );

    // On essaye de trouver la première phrase dans le texte.
    char firstSentence[ length ];
    char * res = memccpy( firstSentence, text, 0, length );

    // On affiche le resultat.
    if ( res != 0 ) {
        printf( "Une phrase entière a été trouvée.\n" );
        printf( "\t%s\n", firstSentence );
    } else {
        printf( "Aucune phrase entière trouvée.\n" );
    }

 
	(void)argc;
	char s1[]= "Hello world";
	char s2[] = "yeyeshhhhekek";
	void	*s3;
	char *s4;
	int c = 'o';
	printf("%d",c);
	s3 = memccpy(s2,s1,c,7);
	s4 = (char*)s3;
	printf("%s",s4);
}

*/
