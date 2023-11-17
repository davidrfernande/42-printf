/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:33:10 by davidro2          #+#    #+#             */
/*   Updated: 2023/11/17 19:01:53 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		counter;
	int		i;

	i = 0;
	counter = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && ft_strrchr("cspdiuxX%", str[i + 1]))
		{
			i++;
			counter = ft_print_format(str[i], args, counter);
			i++;
			continue ;
		}
		write(1, &str[i], 1);
		counter++;
		i++;
	}
	va_end(args);
	return (counter);
}

// int	main(void)
// {
// 	printf("BENFICA %s BENFICA", "ola");
// 	ft_printf("BENFICA %s BENFICA", "ola");
// }