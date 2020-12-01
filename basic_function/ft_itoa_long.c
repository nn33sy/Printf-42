/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_long.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: how-choongines <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 21:10:12 by how-choon         #+#    #+#             */
/*   Updated: 2020/11/24 00:31:50 by how-choon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checklength(long long n)
{
	int count;

	count = 0;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	if (n < 10)
		count++;
	else
		count += 1 + ft_checklength(n / 10);
	return (count);
}

static void	ft_swap_chain(char *chain, int length)
{
	char inter;

	if (length >= 2)
	{
		inter = chain[0];
		chain[0] = chain[length - 1];
		chain[length - 1] = inter;
		ft_swap_chain(&chain[1], length - 2);
	}
}

static void	ft_ope(long long n, char *chain)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		chain[i] = '-';
		n *= -1;
		i++;
	}
	if (n < 10)
	{
		chain[i] = n + '0';
		i++;
		chain[i] = '\0';
	}
	else
	{
		chain[i++] = (n % 10) + '0';
		ft_ope(n / 10, &chain[i]);
	}
}

char		*ft_itoa_long(long long n)
{
	long	length;
	char	*chain;

	length = ft_checklength(n);
	chain = (char *)malloc(sizeof(char) * (length + 1));
	if (chain == 0)
		return (0);
	ft_ope(n, chain);
	if (n > 0)
		ft_swap_chain(chain, length);
	else
		ft_swap_chain(&chain[1], length - 1);
	return (chain);
}
