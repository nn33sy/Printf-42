#include "libft.h"
#include "libftprintf.h"

void ft_flags(t_argument *arg, t_param *param)
{
        char    *flags;
        int j;

        flags = (char*)malloc(sizeof(char) * NB_FLAGS_MAX);
        ft_memset(flags,0,NB_FLAGS_MAX);
        if (flags != 0)
        {
                j = 0;
                while (ft_comp(param->flags,*(arg->chain)) == 1)
                {
                        ft_check_flags(flags,*(arg->chain), &j);
                        (arg->chain)++;
                }
        }
        arg->flags = flags;
        arg->nb_flags = ft_strlen(flags);
}
