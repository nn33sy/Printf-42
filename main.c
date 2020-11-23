#include "libft.h"
#include "libftprintf.h"
//#define INT_MAX 2147483647
#include <stdio.h>
int main()
{
	//ft_printf2("%s  %c %d %u %x  %X","hello world",'a', -2147483648, 4294967295, 9223372036854775807, -9223372036854775808);
printf("\n"); 
//printf("%s  %c %d %u %x %X","hello world",'a', -2147483648, 4294967295, 9223372036854775807,-9223372036854775808);

//char *chain = ft_itoa_base(-2147483647,"0123456789ABCDEF");
//printf("%s",chain);
/*	int a;
    printf("a - declared\n");
    printf("int a = [%d]\n", a);            // example - 1745899614
    printf("int a pointer = [%p]\n", a);    // example - 0x6810505e
	
	ft_printf2("resultat de mon printf %p ",a);
    a = 10;
    printf("\n a - initialized to value of 10\n");
    printf("int a = [%d]\n", a);            // exmaple - 10
    printf("int a pointer = [%p]\n", a); 
	ft_printf2("resultat de mon printf %p ",a);*/

char a ='c';
ft_printf2("%.20d",-3);
printf("\n%.20d",-13536710);
//printf("\n%20.2s\n",NULL);
//printf("\n%xp\n",&a);
}
