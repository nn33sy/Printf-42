/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: how-choongines <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 22:55:48 by how-choon         #+#    #+#             */
/*   Updated: 2020/11/24 22:18:08 by how-choon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

void	ft_d(t_argument *arg, t_chain *chain, va_list ap)
{
	long long	n;

	ft_check_star(arg, ap);
	n = va_arg(ap, int);
	if (n == 0 && arg->prec == 0)
	{
		chain->chain_arg = (char*)malloc(sizeof(char) * 1);
		chain->chain_arg[0] = '\0';
	}
	else
		chain->chain_arg = ft_itoa_long(n);
	ft_ope_nb(arg, chain);
	if (n < 0)
		ft_swap_minus(chain->chain_print);
	ft_putstr_fd(chain->chain_print, 1);
}
