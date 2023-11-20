/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:15:25 by david             #+#    #+#             */
/*   Updated: 2023/11/20 17:13:33 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_format(char c, va_list arg, int counter)
{
	if (c == 'c')
		return (counter += ft_putchar_pf(va_arg(arg, int)));
	else if (c == 's')
		return (counter += ft_putstr_pf(va_arg(arg, char *)));
	else if (c == 'p')
		return (counter += ft_vdtohex_pf((long unsigned int)va_arg(arg, long)));
	else if (c == 'd' || c == 'i')
		return (counter += ft_putnbr_pf(va_arg(arg, int)));
	else if (c == 'u')
		return (counter += ft_uputnbr_pf(va_arg(arg, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (counter += ft_puthex_pf(va_arg(arg, unsigned int), c));
	else if (c == '%')
		return (counter += ft_putchar_pf('%'));
	return (counter);
}
