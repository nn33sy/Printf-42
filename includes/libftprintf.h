/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: how-choongines <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 20:07:10 by how-choon         #+#    #+#             */
/*   Updated: 2020/12/01 20:07:13 by how-choon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
# define NB_FLAGS_MAX 3

typedef struct	s_argument
{
	char	*chain;
	char	*flags;
	int		nb_flags;
	int		width;
	int		prec;
	int		space;
	char	type;
}				t_argument;

typedef struct	s_param
{
	char	*flags;
	char	*type_char;
}				t_param;

typedef struct	s_chain
{
	char	*chain_print;
	char	*chain_arg;
}				t_chain;

typedef void	(*t_fct)(t_argument *arg, t_chain *chain, va_list ap);

int				ft_printf(const char *format, ...);

int				ft_comp(char *a, char b);
char			*ft_itoa_long(long long n);
char			*ft_itoa_base(long long n, char *base);
void			ft_check_star(t_argument *arg, va_list ap);
void			ft_swap_minus(char *chain);
void			ft_free(t_argument *arg, t_chain *chain);

void			ft_initialize_param(t_param *param);
void			ft_initialize_argument(const char *format, t_argument *arg,
t_param *param);
void			ft_check_flags(char *flags, char c, int *j);
void			ft_flags(t_argument *arg, t_param *param);
int				ft_length_arg(const char *format, t_param *param);
void			ft_copyarg(const char *format, t_argument *arg, t_param *param);
void			ft_width(t_argument *arg);
void			ft_prec(t_argument *arg);
void			ft_type(t_argument *arg, t_param *param);

void			ft_s(t_argument *arg, t_chain *chain, va_list ap);
void			ft_c(t_argument *arg, t_chain *chain, va_list ap);
void			ft_d(t_argument *arg, t_chain *chain, va_list ap);
void			ft_x(t_argument *arg, t_chain *chain, va_list ap);
void			ft_xmaj(t_argument *arg, t_chain *chain, va_list ap);
void			ft_p(t_argument *arg, t_chain *chain, va_list ap);
void			ft_u(t_argument *arg, t_chain *chain, va_list ap);
void			ft_pmaj(t_argument *arg, t_chain *chain, va_list ap);

void			ft_ope_nb(t_argument *arg, t_chain *chain);
void			ft_apply_prec_nb(t_argument *arg, t_chain *chain, int len);
void			ft_apply_width_nb(t_argument *arg, t_chain *chain, int len);
void			ft_apply_width_ope_char(t_argument *arg, t_chain *chain,
int len);
void			ft_apply_s(t_argument *arg, t_chain *chain);

#endif
