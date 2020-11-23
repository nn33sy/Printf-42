/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: how-choongines <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 19:06:18 by how-choon         #+#    #+#             */
/*   Updated: 2020/11/23 19:08:21 by how-choon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

void ft_c(t_argument *arg, t_chain *chain, va_list ap)
{
        chain->chain_arg = (char*)malloc((sizeof(char) * 2));
        chain->chain_arg[0] = va_arg(ap, int);
        chain->chain_arg[1] = '\0';
	ft_apply_width_ope(arg, chain, 1);
        ft_putstr_fd(chain->chain_print, 1);
	
}
