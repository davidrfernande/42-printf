/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:01:24 by david             #+#    #+#             */
/*   Updated: 2023/11/19 23:28:53 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int  ft_lowhex(unsigned int n, char *base, int counter)
{
    if(n >= 16)
    {
        ft_lowhex(n / 16, base, counter);
    }
    write(1, &base[n % 16], 1);
    return (counter + 1);
}

static int  ft_uphex(unsigned int n, char *base, int counter)
{
    if(n >= 16)
    {
        ft_uphex(n / 16, base, counter);
    }
    write(1, &base[n % 16], 1);
    return (counter + 1);
}

int	ft_puthex_pf(int n, char c)
{
    char    *base;
    int     counter;

    counter = 0;
    if (c == 'x')
    {
        base = "0123456789abcdef";
        counter = ft_lowhex(n, base, counter);
    }
    else if (c == 'X')
    {
        base = "0123456789ABCDEF";
        counter = ft_uphex(n, base, counter);
    }
    return (counter);
}

int main()
{
    // ft_puthex_pf(0, 'x');
    printf("%x", 0);
}