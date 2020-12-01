/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: how-choongines <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 18:13:04 by how-choon         #+#    #+#             */
/*   Updated: 2020/12/01 18:13:07 by how-choon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

void	ft_free(t_argument *arg, t_chain *chain)
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
			free(chain);
			return ;
		}
		if (chain->chain_arg != 0)
			free(chain->chain_arg);
		if (chain->chain_print != 0)
			free(chain->chain_print);
		free(chain);
	}
}
