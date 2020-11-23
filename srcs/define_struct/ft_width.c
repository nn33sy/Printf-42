#include "libft.h"
#include "libftprintf.h"

void ft_width(t_argument *arg)
{
         int count;
         char *width;

        count = 0;
        if (*(arg->chain) == '*')
         {
                  arg->width = -1;
		arg->chain ++;
                  return;
         }
         while (arg->chain[count] >='0' && arg->chain[count] <= '9')
                  count++;
        width = (char *)malloc(sizeof(char) * (count + 1));
         if (width == 0)
         {
		arg->width = -10;
		return;
	}
        ft_memset(width,0,count + 1);
        ft_memcpy(width,arg->chain,count);
        arg->width = ft_atoi(width);
        free(width);
        arg->chain = &(arg->chain[count]);
}
