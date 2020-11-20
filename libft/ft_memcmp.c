/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: how-choongines <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 17:48:39 by how-choon         #+#    #+#             */
/*   Updated: 2020/11/18 21:37:28 by how-choon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_bis;
	unsigned char	*s2_bis;

	s1_bis = (unsigned char *)s1;
	s2_bis = (unsigned char *)s2;
	i = 0;
	if (*s1_bis == '\0' && *s2_bis != '\0')
		return (-1);
	if (*s2_bis == '\0' && *s1_bis != '\0')
		return (1);
	while (i < n - 1 && s1_bis[i] == s2_bis[i])
		i++;
	if (i == 0)
		return (0);
	return (s1_bis[i] - s2_bis[i]);
}
