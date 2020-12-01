/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_param.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: how-choongines <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 16:16:46 by how-choon         #+#    #+#             */
/*   Updated: 2020/11/25 16:16:51 by how-choon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

void	ft_initialize_param(t_param *param)
{
	if (param != 0)
	{
		param->flags = ft_strdup("-0");
		if (param->flags == NULL)
			return ;
		param->type_char = ft_strdup("cspdiuxX");
		if (param->type_char == NULL)
		{
			if (param->flags != NULL)
				free(param->flags);
			free(param);
			return ;
		}
	}
}
