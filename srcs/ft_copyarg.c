#include "libft.h"
#include "libftprintf.h"
void ft_copyarg(const char *restrict format, t_argument *arg, t_param *param) //checked
{
        char *chain;
        int  length;

        length = ft_length_arg(format,param);
        if (length != 0)
                {
                        chain = (char*)(malloc(sizeof(char) * (length + 1)));
                        if (chain != 0)
                        {
                                ft_memcpy(chain,format,length + 1);
                                chain[length] = '\0';
                        }
                        arg->chain = chain;
                }
        else
                arg->chain = 0;
}
