
#include "libft.h"
#include "libftprintf.h"

void ft_initialize_argument(const char *restrict format, t_argument *arg, t_param *param)
{
        format++;
        ft_copyarg(format,arg, param);
        if (arg->chain == 0)
        {
                ft_putchar_fd('%',1);
                return;
        }
        format = &format[ft_strlen(arg->chain)];
        printf("chaine  :%s \n",arg->chain);
        ft_flags(arg,param);
        printf("flags :%s \n",arg->flags);
        printf("flags nb : %d\n",arg->nb_flags);
//      printf("chaine %s \n",arg->chain);
        ft_width(arg);
        printf("width %d \n",arg->width);
//      printf("chain %s\n",arg->chain);
        ft_prec(arg);
        printf("prec %d\n",arg->prec);
        ft_type(arg,param);
        printf("type :%c",arg->type);


}
