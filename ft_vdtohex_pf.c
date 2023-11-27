/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdtohex_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:49:35 by davidro2          #+#    #+#             */
/*   Updated: 2023/11/27 13:58:13 by davidro2         ###   ########.fr       */
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
	counter += ft_puthex_pf(ptr, 'x');
	return (counter);
}

// int main()
// {
// 	int x = 15;
// 	void	*ptr = (void *)&x;
//     printf("%p", ptr);
// }