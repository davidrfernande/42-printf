/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:45:29 by davidro2          #+#    #+#             */
/*   Updated: 2023/11/13 16:28:15 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_format(char c, va_list arg, int counter)
{
    if (c == 'c')
        return (counter += ft_putchar(va_arg(arg, int)));
    else if (c == 's')
        return (counter += ft_putstr(va_arg(arg, char *)));
    else if (c == 'p')
        ft_
    else if (c == 'd' || c == 'i' || c == 'u')
        return (counter += ft_lputnbr(va_arg(arg, int)));
    else if (c == 'x')
        ft_
    else if (c == 'X')
        ft_
    else if (c == '%')
        return (counter += ft_putchar('%'));
    return (counter);
}
