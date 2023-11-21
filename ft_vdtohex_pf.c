/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdtohex_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:49:35 by davidro2          #+#    #+#             */
/*   Updated: 2023/11/21 22:25:07 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_vdtohex_pf(unsigned long ptr)
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
	int x = 15;
	void	*ptr = (void *)&x;
    printf("%p", ptr);
}