/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prec_nb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: how-choongines <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 17:59:11 by how-choon         #+#    #+#             */
/*   Updated: 2020/11/26 17:59:15 by how-choon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

void	ft_apply_prec_nb(t_argument *arg, t_chain *chain, int len)
{
	char	*prec;

	prec = (char *)malloc(sizeof(char) * (arg->prec + 1));
	if (prec == NULL)
	{	chain->chain_arg = NULL;
		return ;
	}
	prec = ft_memset(prec, '0', arg->prec);
	prec[arg->prec - len] = '\0';
	ft_strlcat(prec, chain->chain_arg, arg->prec + 1);
	free(chain->chain_arg);
	chain->chain_arg = prec;
}
