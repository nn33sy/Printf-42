/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_argument.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: how-choongines <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 17:10:24 by how-choon         #+#    #+#             */
/*   Updated: 2020/11/26 17:10:29 by how-choon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

void	ft_initialize_argument(const char *format, t_argument *arg, t_param *param)
{
	char *temp;

	format++;
	ft_copyarg(format, arg, param);
	if (arg->chain == 0)
		return ;
	temp = arg->chain;
	ft_flags(arg,param);
	ft_width(arg);
	ft_prec(arg);
	ft_type(arg,param);
	arg->chain = temp;

}
