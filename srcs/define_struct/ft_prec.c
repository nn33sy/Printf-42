#include "libft.h"
#include "libftprintf.h"

void ft_prec(t_argument *arg)
{
        int count;
        char *prec;

        if (*(arg->chain) =='.')
        {
                count = 0;
                (arg->chain)++;
                while (arg->chain[count] >='0' && arg->chain[count] <= '9')
                        count++;
                prec = (char*)malloc(sizeof(char) * (count + 1));
                if (prec == 0)
                        return;
                ft_memset(prec,0,count + 1);
                ft_memcpy(prec,arg->chain,count);
                arg->prec = ft_atoi(prec);
                free(prec);
                arg->chain = &(arg->chain[count]);
        }
        else
                arg->prec = -10;
}
