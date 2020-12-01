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

static void	ft_space(const char *format, t_argument *arg)
{
	if (*format == ' ')
		{
			arg->space = 1;
			ft_putchar_fd(' ', 1);
		}
	else 
		arg->space = 0;
}
static int ft_check_free(t_argument *arg, int yeye)
{
		if (arg->chain == NULL && yeye == 0)
			return (-1);
		if (arg->flags == NULL && yeye == 1)
		{
			free(arg->chain);
			return(-1);
		}
		return(1);
}

void	ft_initialize_argument(const char *format, t_argument *arg, t_param *param)
{
	char *temp;

	arg->chain = NULL;
	arg->flags = NULL;
	format++;
	ft_space(format,arg);
	while (*format == ' ')
		format++;
	ft_copyarg(format, arg, param);
	if (ft_check_free(arg, 0) == -1)
		return;
	temp = arg->chain;
	ft_flags(arg,param);
	if (ft_check_free(arg, 1) == -1)
		return;
	ft_width(arg);
	if (arg->width > 0 && arg->space == 1)
		arg->width--;
	ft_prec(arg);
	ft_type(arg,param);
	arg->chain = temp;
}
