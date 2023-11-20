/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdtohex_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:49:35 by davidro2          #+#    #+#             */
/*   Updated: 2023/11/20 23:34:09 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_vdtohex_pf(unsigned long int ptr)
{
	int	counter;

	counter = 0;
	if (!ptr)
	{
		counter += write(1, "(nil)", 5);
		return (counter);
	}
	counter += write(1, "0x", 2);
	counter += ft_puthex_pf(ptr, 'X');
	return (counter);
}

int main()
{
    ft_vdtohex_pf(-1);
    write(1, "\n", 1);
    printf("%p", -1);
}