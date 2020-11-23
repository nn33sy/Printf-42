/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: how-choongines <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 22:55:48 by how-choon         #+#    #+#             */
/*   Updated: 2020/11/24 00:13:45 by how-choon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

static void ft_apply_prec(t_argument *arg, t_chain *chain, int len)
{
	char	*prec;
	int	sign;

	prec = (char *)malloc(sizeof(char) * (arg->prec + 1));
	if (prec == NULL)
		return;
	prec = ft_memset(prec, '0', arg->prec);
	prec[arg->prec - len] = '\0';
	ft_strlcat(prec, chain->chain_arg, arg->prec + 1);
	free(chain->chain_arg);
	if (prec[arg->prec - len] == '-')
	{
		prec[arg->prec - len] = '0';
		prec[0] = '-';
	}
	chain->chain_arg = prec; 
}
static void ft_apply_prec_padd(t_argument *arg, t_chain *chain)
{
	int len;

	len = ft_strlen(chain->chain_arg);
	if (len < arg->prec)
	{	
		ft_apply_prec(arg, chain, len);
		len = arg->prec;
	}
/*	if (len > arg->width)
	{
		i
	}
*/
}

void ft_d(t_argument *arg, t_chain *chain, va_list ap)
{
        chain->chain_arg = ft_itoa_long((va_arg(ap, long long)));
    ft_putstr_fd(chain->chain_arg, 1);
//	ft_apply_prec_padd(arg, chain);
//	ft_putstr_fd(chain->chain_arg, 1);
}
