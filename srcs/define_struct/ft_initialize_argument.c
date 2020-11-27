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
  //     printf("flags :%s \n",arg->flags);
//       printf("flags nb : %d\n",arg->nb_flags);
//     printf("chaine %s \n",arg->chain);
	ft_width(arg);
      //  printf("width %d \n",arg->width);
	ft_prec(arg);
   //     printf("prec %d\n",arg->prec);
//printf("chain huueu %s\n",arg->chain);
	ft_type(arg,param);
  //     printf("type :%c",arg->type);
	arg->chain = temp;
}
