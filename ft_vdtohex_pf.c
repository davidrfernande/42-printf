/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdtohex_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:49:35 by davidro2          #+#    #+#             */
/*   Updated: 2023/11/20 14:01:21 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_vdtohex_pf(unsigned long int ptr)
{
	int counter;

    counter = 0;
    if (ptr == 0)
    {
        write(1, "(nil)", 5);
        return (5);        
    }
    counter += write(1, "0x", 2);
    counter += ft_puthex_pf(ptr, 'X');
    return (counter);
}
