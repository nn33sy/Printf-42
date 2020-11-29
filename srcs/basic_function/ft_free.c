#include "libft.h"
#include "libftprintf.h"

void ft_free(t_argument *arg, t_chain *chain)
{
    if (arg != 0)
    {
        if (arg->chain != 0)
            free(arg->chain);
        if (arg->flags != 0)
            free(arg->flags);
	    free(arg);
    }
    if (chain != 0)
    {
        if (chain->chain_arg != 0 && chain->chain_arg == chain->chain_print)
            {
                free(chain->chain_arg);
                return;
                free(chain);
            }
        if (chain->chain_arg != 0)
            free(chain->chain_arg);
        if (chain->chain_print != 0)
            free(chain->chain_print);
        free(chain);
    }
}