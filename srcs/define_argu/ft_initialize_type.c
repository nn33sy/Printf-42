#include "libft.h"
#include "libftprintf.h"

void ft_initialize_type(t_param *param)
{
        char *type_char;

        type_char = (char *)malloc(sizeof(char) * 9);
        if (type_char != 0)
        {
                type_char[0]= 'c';
                type_char[1]= 's';
                type_char[2]= 'p';
                type_char[3]= 'd';
                type_char[4]= 'i';
                type_char[5]= 'u';
                type_char[6]= 'x';
                type_char[7]= 'X';
                type_char[8]= '\0';
                param->type_char = type_char;
        }

}
