/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ope_nb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: how-choongines <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 17:57:40 by how-choon         #+#    #+#             */
/*   Updated: 2020/11/26 17:57:45 by how-choon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

void	ft_ope_nb(t_argument *arg, t_chain *chain)
{
	int	len;

	len = ft_strlen(chain->chain_arg);
	if (arg->prec != -10 && len < arg->prec)
	{
		ft_apply_prec_nb(arg, chain, len);
		len = arg->prec;
	}
	if (arg->width != -10 && arg->width > len)
		ft_apply_width_nb(arg, chain, len);
	else
		chain->chain_print = chain->chain_arg;
}
