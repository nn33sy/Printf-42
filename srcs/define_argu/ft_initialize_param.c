#include "libft.h"
#include "libftprintf.h"

void ft_initialize_param(t_param *param)
{
        if (param != 0)
        {
                ft_initialize_flags(param);
                ft_initialize_type(param);
        }
}
