/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:15:30 by david             #+#    #+#             */
/*   Updated: 2023/11/07 00:19:05 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int  ft_intlen(int n)
{
    int len;
    int nr;

    len = 0;
    nr = n;
    if (nr == 0)
    {
        len++;
        return (len);
    }
    if (nr < 0)
    {
        nr = -nr;
        len++;
    }
    while (nr != 0)
    {
        nr = nr / 10;
        len++;
    }
    return (len);
}
char    *ft_itoa(int n)
{
	unsigned int len;
    unsigned int nr;
    char    *str;

    len = ft_intlen(n);
    str = (char *)malloc((len + 1) * sizeof(char));
    if (!str)
        return (NULL);
    if (n < 0)
    {
        str[0] = '-';
        nr = -n;
    }
    else
        nr = n;
    if (nr == 0)
        str[len] = '0';
    str[len] = '\0';
    while (nr != 0)
    {
        str[len -1] = (nr % 10) + 48;
        nr = nr / 10;
        len--;
    }
    return (str);
}

// int main()
// {
//     ft_itoa(-1234);
// }