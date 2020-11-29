/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_minus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: how-choongines <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 18:14:36 by how-choon         #+#    #+#             */
/*   Updated: 2020/11/26 18:14:39 by how-choon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

void	ft_swap_minus(char *chain)
{
	int	i;

	i = 0;
	while (chain[i] != '-')
		i++;
	if (i >= 1)
	{
		if (chain[i - 1] == ' ')
			return;
		else
			chain[i] = '0';
	}
	i = 0;
	while (chain[i] == ' ')
		i++;
	if (i >= 1) 
		chain[i] = '-';
	else
		chain[0] = '-';
}
