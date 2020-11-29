/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width_s_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: how-choongines <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 18:58:37 by how-choon         #+#    #+#             */
/*   Updated: 2020/11/23 19:21:26 by how-choon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

void	ft_apply_width_ope_char(t_argument *arg, t_chain *chain, int len)
{
	char	*pad;

	pad = (char*)malloc(sizeof(char) * arg->width + 1);
	if (ft_comp(arg->flags, '0') == 1)
		pad = ft_memset(pad, '0', arg->width);
	else
		pad = ft_memset(pad, ' ', arg->width);
	pad[arg->width] = '\0';
	if (ft_comp(arg->flags, '-') == 1)
		ft_memcpy(pad, chain->chain_arg, len);
	else
		ft_memcpy(&pad[arg->width - len], chain->chain_arg, len);
	chain->chain_print = pad;
}
