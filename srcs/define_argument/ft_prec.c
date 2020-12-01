/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: how-choongines <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 17:41:44 by how-choon         #+#    #+#             */
/*   Updated: 2020/11/26 17:41:48 by how-choon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

void	ft_prec(t_argument *arg)
{
	int		count;
	char	*prec;

	arg->prec = -10;
	if (*(arg->chain) == '.')
	{
		count = 0;
		(arg->chain)++;
		if (*(arg->chain) == '*')
		{
			arg->prec = -1;
			arg->chain++;
			return ;
		}
		while (arg->chain[count] >= '0' && arg->chain[count] <= '9')
			count++;
		prec = (char*)malloc(sizeof(char) * (count + 1));
		if (prec == 0)
			return ;
		ft_memset(prec, 0, count + 1);
		ft_memcpy(prec, arg->chain, count);
		arg->prec = ft_atoi(prec);
		free(prec);
		arg->chain = &(arg->chain[count]);
	}
}
