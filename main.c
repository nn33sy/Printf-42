
//#define INT_MAX 2147483647
#include "libftprintf.h"
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
// ft_printf("%7d", 33);
// printf("\n%7d\n", 33);
/*
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


printf("9\n");
ft_printf("%.0d", 0);
printf("%.0d", 0);

printf("10\n");
ft_printf("%.d", 0);
printf("%.d", 0);

printf("11\n");
ft_printf("%5.0dh", 0);
printf("\n%5.0dh\n", 0);

printf("12\n");
ft_printf("%5.dh", 0);
printf("\n%5.dh\n", 0);

printf("13\n");
ft_printf("%-5dh", 10);
printf("\n%-5dh\n", 10);

printf("14\n");
ft_printf("%-5.dh", 0);
printf("\n%-5.dh\n", 0);

printf("15\n");
ft_printf("%7i", 33);
printf("\n%7i\n", 33);

printf("16\n");
ft_printf("%7i", -14);
printf("\n%7i\n", -14);


printf("14\n");
ft_printf("%-5.xh", 0);
printf("\n%-5.xh\n", 0);

printf("15\n");
ft_printf("%5.0ih", 0);
printf("\n%5.0ih\n", 0);

printf("15\n");
ft_printf("%5ch", '\0');
printf("\n%5ch\n", '\0');

printf("16\n");
ft_printf("%10.5d", -216);
printf("\n%10.5d\n", -216);

printf("17\n");
 ft_printf("%3dh", 0);
printf("\n%3dh\n", 0);

printf("18\n");
ft_printf("%7d", -14);
printf("\n%7d\n", -14);


ft_printf("%0*dh",-10,5);
printf("\n%0*dh\n",-10,5);

ft_printf("%.*d", 10, 12345);
printf("\n%.*d\n", 10, 12345);

ft_printf("%.*s",0,"hello");
printf("\n%.*s\n", -1, "hello");

ft_printf("%i 0000042 == \n", 0042);
ft_printf("%c", 0);
printf("%50c", 0);
*/
// if (0 == '\0')
//     printf("olol\n");
// char *strr;
// strr = malloc(10);
// strr[0]= 'a';
// strr[1] = 'b';
// strr[2] = 0;
// strr[3]='c';
// strr[4] ='\0';

// printf("%djs djd");


// printf("%-5%\n");
// printf("%05%\n");
// printf("%-05%\n");
ft_printf("%5.%");
//printf("%5.%");
//ft_printf("% c", 'a');




//printf("%2.9p\n", 1234);
//ft_printf("%2.9p\n", 1234);

//printf("%.5p",0);
//ft_printf("% c",-42);
/*
printf("%d",ft_printf("%c, %-c, %12c, %-3c, %-1c, %1c, %-2c, %-4c, %5c, %3c, %-*c, %-*c, %*c, %*c", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0));
printf("\n");
printf("%d",printf("%c, %-c, %12c, %-3c, %-1c, %1c, %-2c, %-4c, %5c, %3c, %-*c, %-*c, %*c, %*c", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0));
 printf("\n");
printf("%d",ft_printf("%c, %-c, %12c, %-3c, %-1c, %1c, %-2c, %-4c, %5c, %3c, %-*c, %-*c, %*c, %*c", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0));
printf("\n");
printf("%d",printf("%c, %-c, %12c, %-3c, %-1c, %1c, %-2c, %-4c, %5c, %3c, %-*c, %-*c, %-*c, %*c",0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0));
printf("\n");*/

}
