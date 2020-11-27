/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: how-choongines <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 23:10:13 by how-choon         #+#    #+#             */
/*   Updated: 2020/11/25 16:00:54 by how-choon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

static int		ft_checkorder_base(long long n, int len)
{
	int	order;

	order = 0;
	if (n == 0)
		return (1);
	while (n / len != 0)
	{
		order++;
		n /= len;
	}
	return (order + 1);
}

static void		ft_swap(char *s, int order)
{
	char inter;

	if (order > 1)
	{
		inter = s[0];
		s[0] = s[order - 1];
		s[order - 1] = inter;
		ft_swap(&s[1], order - 2);
	}
}

static void		ft_ope(long long n, char *s, int len, char *base)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		s[i] = base[0];
		i++;
	}
	while (n != 0)
	{
		s[i] = base[n % len];
		n /= len;
		i++;
	}
	s[i] = '\0';
}

char			*ft_itoa_base(long long n, char *base)
{
	char	*s;
	int		order;
	int		len;

	if (n < 0)
		n *= -1;
	len = ft_strlen(base);
	order = ft_checkorder_base(n, len);
	s = (char*)malloc(sizeof(char) * (order + 1));
	if (s == 0)
		return (0);
	ft_ope(n, s, len, base);
	ft_swap(s, order);
	return (s);
}
