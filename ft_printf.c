/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:33:10 by davidro2          #+#    #+#             */
/*   Updated: 2023/11/07 14:44:56 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
    va_list args;
    int     counter;
    int     i;

    i = 0;
    counter = 0;
    va_start(args, str);
    while (str[i])
    {
        if (str[i] == '%')
        {
            i++;
            counter += ft_print_format(str[i]);
            continue;
        }            
        write(1, &str[i], 1);
        counter++;
        i++;
    }    
    va_end(args);
    return(counter);
}
