/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:33:33 by davidro2          #+#    #+#             */
/*   Updated: 2023/11/15 17:22:20 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// # include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_putchar_pf(char c);

int	ft_putstr_pf(char *str);

int	ft_strlen_pf(char *str);

int	ft_lputnbr_pf(long nb);

int	ft_print_format_pf(char c, va_list arg, int counter);

#endif
