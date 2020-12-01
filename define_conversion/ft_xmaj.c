/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xmaj.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: how-choongines <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 16:41:32 by how-choon         #+#    #+#             */
/*   Updated: 2020/11/25 16:41:34 by how-choon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

void	ft_xmaj(t_argument *arg, t_chain *chain, va_list ap)
{
	unsigned int	n;

	ft_check_star(arg, ap);
	n = (unsigned int)va_arg(ap, int);
	if (n == 0 && arg->prec == 0)
	{
		chain->chain_arg = (char*)malloc(sizeof(char) * 1);
		chain->chain_arg[0] = '\0';
	}
	else
		chain->chain_arg = ft_itoa_base(n, "0123456789ABCDEF");
	ft_ope_nb(arg, chain);
	ft_putstr_fd(chain->chain_print, 1);
}
