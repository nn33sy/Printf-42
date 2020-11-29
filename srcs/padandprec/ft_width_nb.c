/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width_nb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: how-choongines <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 18:04:13 by how-choon         #+#    #+#             */
/*   Updated: 2020/11/26 18:04:17 by how-choon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

void	ft_apply_width_nb(t_argument *arg, t_chain *chain, int len)
{
	char	*width;

	width = (char *)malloc(sizeof(char) * (arg->width + 1));
	if (width == NULL)
	{
		chain->chain_print = NULL;
		return ;
	}
	if (ft_comp(arg->flags, '0') == 1 && arg->prec == -10)
		width = ft_memset(width, '0', arg->width);
	else
		width = ft_memset(width, ' ', arg->width);
	if (ft_comp(arg->flags, '-') == 1)
	{
		ft_memcpy(width, chain->chain_arg, len);
		width[arg->width] = '\0';
	}
	else
		ft_memcpy(&width[arg->width - len], chain->chain_arg, len + 1);
	chain->chain_print = width;
}
