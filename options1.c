/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 10:12:06 by cvidon            #+#    #+#             */
/*   Updated: 2021/12/03 10:12:07 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uni(va_list args)
{
	unsigned int	nb;
	int				*len;
	int				l;

	l = 0;
	len = &l;
	nb = va_arg(args, unsigned int);
	ft_putnbrbase(nb, 10, "0123456789", len);
	return (*len);
}

int	ft_hx1(va_list args)
{
	unsigned int	nb;
	int				*len;
	int				l;

	l = 0;
	len = &l;
	nb = va_arg(args, unsigned int);
	ft_putnbrbase(nb, 16, "0123456789abcdef", len);
	return (*len);
}

int	ft_hx2(va_list args)
{
	unsigned int	nb;
	int				*len;
	int				l;

	l = 0;
	len = &l;
	nb = va_arg(args, unsigned int);
	ft_putnbrbase(nb, 16, "0123456789ABCDEF", len);
	return (*len);
}

int	ft_pct(va_list args)
{
	(void)args;
	ft_putchar('%');
	return (1);
}