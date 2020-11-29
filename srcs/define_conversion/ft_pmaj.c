#include "libft.h"
#include "libftprintf.h"

void    ft_pmaj(t_argument *arg, t_chain *chain, va_list ap)
{   
    (void)arg;
    (void)ap;
    chain->chain_arg = (char *)malloc(sizeof(char) * 2);
    chain->chain_arg[0] = '%';
    chain->chain_arg[1] = '\0';
    ft_apply_s(arg, chain);
    ft_putstr_fd(chain->chain_print, 1);
}