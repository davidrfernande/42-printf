/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:53:25 by davidro2          #+#    #+#             */
/*   Updated: 2023/11/02 15:05:32 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int   ft_putstr(char *str)
{
    int i;

    i = 0;
    if (str)
    {
        while (str[i])
        {
            write(1, &str[i], 1);
            i++;
        }
    }
    return (i);
}

// int main()
// {
//     char *str = "onepiece";

//     ft_putstr(str);
// }