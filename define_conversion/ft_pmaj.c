/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pmaj.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: how-choongines <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 18:31:40 by how-choon         #+#    #+#             */
/*   Updated: 2020/12/01 18:31:44 by how-choon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

void	ft_pmaj(t_argument *arg, t_chain *chain, va_list ap)
{
	(void)arg;
	(void)ap;
	ft_check_star(arg, ap);
	chain->chain_arg = (char *)malloc(sizeof(char) * 2);
	chain->chain_arg[0] = '%';
	chain->chain_arg[1] = '\0';
	if (arg->width != -10 && arg->width != 0)
		ft_apply_width_ope_char(arg, chain, 1);
	else
		chain->chain_print = chain->chain_arg;
	ft_putstr_fd(chain->chain_print, 1);
}
