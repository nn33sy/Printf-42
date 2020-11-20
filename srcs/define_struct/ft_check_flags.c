#include "libft.h"
#include "libftprintf.h"
void ft_check_flags(char *flags,char c, int *j)
{
        if (ft_strchr(flags,c) != 0)
               return;
        if (c == '0' && ft_strchr(flags,'-') != 0)
                return;
        if (c == '-' && ft_strchr(flags,'0') != 0)
                {
                        *(ft_strchr(flags,'0')) = '-' ;
                        return;
                }
        flags[*j] = c;
        (*j)++;
}
