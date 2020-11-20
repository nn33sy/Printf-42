#include <string.h>
#include <assert.h>
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *s1_bis;
	unsigned char *s2_bis;

	s1_bis = (unsigned char *)s1;
	s2_bis = (unsigned char *)s2;
	i = 0;
	while ( i < n - 1 && s1_bis[i] == s2_bis[i])
		i++;
	if (i == 0)
		return (0);
	return(s1_bis[i] - s2_bis[i]);
}
/*
int main() {

    char array1 [] ="\xff\xaa\xde\x12";
    char array2 [] ="\xff\xaa\xde\x12MACOSAAAAA";
    size_t size = 4;

    printf("%d et %d \n ",memcmp( array1, array2, size),ft_memcmp( array1, array2, size) );       
    printf(" %d %d \n", memcmp( array1, array1, size) ,ft_memcmp( array1, array1, size) );       
    printf("%d %d", memcmp( array2, array1, size),ft_memcmp( array2, array1, size) );       
    
    printf( "Test is ok\n" );
    
    return 0;
}*/
