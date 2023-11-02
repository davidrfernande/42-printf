/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:16:01 by davidro2          #+#    #+#             */
/*   Updated: 2023/11/02 15:37:28 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_countint(int n)
{
    int c;

    c = 0;
    while (n < 0)
    {
        n = n / 10;
        c++;
    }
    return (c);
}
int ft_putnbr(int n)
{
    
    if (n == -2147483648)
    {
            write(1, "-2147483648", 11);
        return (11);
    }
    if (n < 0)
    {
        write(1, "-", 1);
        n = n * -1;
    }
    if (n > 9)
    {
        ft_putnbr(n / 10);
    }
    n = n % 10 + 48;
    write(1, &n, 1);
    return (ft_countint(n));
}

int main()
{
    int n = 123456;

    printf("%i", ft_putnbr(n));
}