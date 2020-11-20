#include "libft.h"
#include "libftprintf.h"

int ft_length_arg(const char *restrict format, t_param *param) //checked
{
        int l;

        l = 0;
        while (ft_comp(param->flags,format[l]) == 1)
                        l++;
        if (format[l] == '*')
                l++;
        else
        {
                while (format[l] >= '0' && format[l] <= '9')
                        l++;
        }
        if (format[l] =='.')
                l++;
        while (format[l] >= '0' && format[l] <= '9')
                l++;
        if (ft_comp(param->type_char,format[l]) == 1)
              l++;
        else
                l = 0;
        return (l);
}
