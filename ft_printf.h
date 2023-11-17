/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:33:33 by davidro2          #+#    #+#             */
/*   Updated: 2023/11/13 16:04:47 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"

int ft_putchar(char c);

int ft_putstr(char *str);

int ft_strlen(char *str);

int ft_lputnbr(long nb);

int ft_print_format(char c, va_list arg, int counter);

#endif
