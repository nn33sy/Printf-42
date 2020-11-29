/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_star.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: how-choongines <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 18:10:07 by how-choon         #+#    #+#             */
/*   Updated: 2020/11/26 18:10:11 by how-choon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

void	ft_check_star(t_argument *arg, va_list ap)
{
	int	j;
	if (arg->width == -1)
		{
			arg->width = va_arg(ap, int);
			if (arg->width < 0)
				{
					arg->width *= -1;
					j = 0;
					ft_check_flags(arg->flags,'-',&j);
				}
		}
	if (arg->prec == -1)
	{
		arg->prec = va_arg(ap, int);
		if (arg->prec < 0)
			arg->prec = -10;
	}
}
