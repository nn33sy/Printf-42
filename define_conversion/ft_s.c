/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: how-choongines <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:25:06 by how-choon         #+#    #+#             */
/*   Updated: 2020/11/23 18:59:23 by how-choon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

void	ft_s(t_argument *arg, t_chain *chain, va_list ap)
{
	char	*chain_arg;

	ft_check_star(arg, ap);
	chain_arg = va_arg(ap, char *);
	if (chain_arg == NULL)
		chain->chain_arg = ft_strdup("(null)");
	else
		chain->chain_arg = ft_strdup(chain_arg);
	ft_apply_s(arg, chain);
	ft_putstr_fd(chain->chain_print, 1);
}
