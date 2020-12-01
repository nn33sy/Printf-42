/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: how-choongines <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 18:42:17 by how-choon         #+#    #+#             */
/*   Updated: 2020/12/01 18:42:19 by how-choon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

void	ft_apply_s(t_argument *arg, t_chain *chain)
{
	int len;

	len = ft_strlen(chain->chain_arg);
	if (arg->prec != -10 && arg->prec < len)
	{
		ft_memset(&chain->chain_arg[arg->prec], '\0', len - arg->prec);
		len = arg->prec;
	}
	if (arg->width != -10 && arg->width > len)
		ft_apply_width_ope_char(arg, chain, len);
	else
		chain->chain_print = chain->chain_arg;
}
