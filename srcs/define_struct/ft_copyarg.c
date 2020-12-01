/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copyarg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: how-choongines <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:51:04 by how-choon         #+#    #+#             */
/*   Updated: 2020/11/26 17:02:49 by how-choon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

void	ft_copyarg(const char *format, t_argument *arg, t_param *param)
{
	char	*chain;
	int	length;

	length = ft_length_arg(format, param);
	if (length != 0)
	{
		chain = (char*)(malloc(sizeof(char) * (length + 1)));
		if (chain != 0)
		{
			ft_memcpy(chain, format, length + 1);
			chain[length] = '\0';
		}
		arg->chain = chain;
	}
}
