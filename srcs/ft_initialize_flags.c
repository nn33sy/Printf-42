#include "libft.h"
#include "libftprintf.h"
void ft_initialize_flags(t_param *param)
{
        char *flags;

        flags = (char*) malloc(sizeof(char) * 3);
        if (flags != 0)
        {
                flags[0] = '-';
                flags[1] = '0';
                flags[2] = '\0';
                param->flags = flags;
        }

}
