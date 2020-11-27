#include "libft.h"
#include "libftprintf.h"
//#define INT_MAX 2147483647
#include <stdio.h>
int main()
{
//	ft_printf2("%s  %c %d %u %x  %X","hello world",'a', -2147483648, 4294967295, 9223372036854775807, -9223372036854775808);

//printf("%s  %c %d %u %x %X \n","hello world",'a', -2147483648, 4294967295, 9223372036854775807,-9223372036854775808);
//ft_printf2("%s  %c %d %u %x %X","hello world",'a', -2147483648, 4294967295, 9223372036854775807,-9223372036854775808);
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


//ft_printf2("%20.10d",-84);
//printf("\n%20dh",84);
//printf("\n%20.10dh",-84);
//printf("\n%20.2s\n",NULL);
//printf("\n%xp\n",&a);
//ft_printf2("%030p",&a);
//printf("\n%30.20p",&a);
//ft_printf2("%c",'a');

//ft_printf("%50c",'h');
//printf("\n%50c\n",'h');

//ft_printf("yes %050s yes ","hello world");
//printf("\nyes %050s yes\n","hello world");
//ft_printf("Hello 42 school! %s", NULL);
//printf("\nHello 42 school! %s", NULL);
//ft_printf("p36 %.0u\n", 0);
ft_printf("%7d", 33);
printf("\n%7d\n", 33);

printf("2\n");
ft_printf("%7d", -14);
printf("\n%7d\n", -14);

printf("3\n");
ft_printf("%---7d", 33);
printf("\n%---7d\n", 33);

printf("4\n");
ft_printf(" %-7d ", -14);
printf("\n %-7d \n", -14);

printf("5\n");
ft_printf("%-3d", 0);
printf("\n%-3d\n", 0);

printf("6\n");
ft_printf("%.6d", -3);
printf("\n%.6d\n", -3);

printf("7\n");
ft_printf("%07d", -54);
printf("\n%07d\n", -54);

printf("8\n");
ft_printf("%3.7d", -2375);
printf("\n%3.7d\n", -2375);























}
