/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: how-choongines <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 16:31:11 by how-choon         #+#    #+#             */
/*   Updated: 2020/11/25 16:31:15 by how-choon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

void	ft_p(t_argument *arg, t_chain *chain, va_list ap)
{
	void			*ptn;
	unsigned long	ad;
	char			*chain_inter;
	char			*hex;

	ft_check_star(arg, ap);
	ptn = va_arg(ap, void *);
	ad = (unsigned long)ptn;
	hex = ft_strdup("0x");
	chain_inter = ft_itoa_base(ad, "0123456789abcdef");
	if (ptn == NULL && arg->prec == 0)
		chain->chain_arg = hex;
	else
	{
		chain->chain_arg = ft_strjoin(hex, chain_inter);
		free(hex);
	}
	free(chain_inter);
	if (ft_strlen(chain->chain_arg) < arg->width)
		ft_apply_width_nb(arg, chain, ft_strlen(chain->chain_arg));
	else
		chain->chain_print = chain->chain_arg;
	ft_putstr_fd(chain->chain_print, 1);
}
