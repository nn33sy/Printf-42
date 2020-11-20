#include "libft.h"
#include "libftprintf.h"

void ft_type(t_argument *arg, t_param *param)
{
        if (ft_comp(param->type_char,*(arg->chain)) == 1)
                arg->type = *(arg->chain);
        else
                arg->type = 0;
}
