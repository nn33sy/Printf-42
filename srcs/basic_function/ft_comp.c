/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: how-choongines <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 20:05:21 by how-choon         #+#    #+#             */
/*   Updated: 2020/11/20 20:05:49 by how-choon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_comp(char *a, char b)
{
	if (a == 0)
		return (0);
	while (*a != '\0')
	{
		if (*a == b)
			return (1);
		a++;
	}
	return (0);
}
