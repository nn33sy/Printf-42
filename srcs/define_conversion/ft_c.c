/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: how-choongines <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 19:06:18 by how-choon         #+#    #+#             */
/*   Updated: 2020/11/26 21:56:55 by how-choon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

static void ft_print_car(char *str, int carac)
{
    int i;

    i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '*' && carac == 0)
			ft_putchar_fd(0,1);
		else
			ft_putchar_fd(str[i],1);
		i++;
	}
}
void	ft_c(t_argument *arg, t_chain *chain, va_list ap)
{
	int caracter;

	ft_check_star(arg, ap);
	chain->chain_arg = (char*)malloc((sizeof(char) * 2));
	caracter = va_arg(ap, int);
	if (caracter == 0)
		chain->chain_arg[0] = '*';
	else
		chain->chain_arg[0] = caracter;
	chain->chain_arg[1] = '\0';
	if (arg->width != -10)
		ft_apply_width_ope_char(arg, chain, 1);
	else
		chain->chain_print = chain->chain_arg;
	ft_print_car(chain->chain_print, caracter);
}
