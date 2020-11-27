/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: how-choongines <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 16:54:41 by how-choon         #+#    #+#             */
/*   Updated: 2020/11/25 16:55:55 by how-choon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

void	ft_check_flags(char *flags, char c, int *j)
{
	if (ft_strchr(flags, c) != 0)
		return ;
	if (c == '0' && ft_strchr(flags, '-') != 0)
		return ;
	if (c == '-' && ft_strchr(flags, '0') != 0)
	{
		*(ft_strchr(flags, '0')) = '-';
		return ;
	}
	flags[*j] = c;
	(*j)++;
}
