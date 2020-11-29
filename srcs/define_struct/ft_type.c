/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: how-choongines <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 17:42:51 by how-choon         #+#    #+#             */
/*   Updated: 2020/11/26 17:42:54 by how-choon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

void	ft_type(t_argument *arg, t_param *param)
{
	if (*(arg->chain) == '%')
	{
		arg->type = 'P';
		return ;
	}
	if (ft_comp(param->type_char,*(arg->chain)) == 1)
		arg->type = *(arg->chain);
	else
		arg->type = 0;
}
