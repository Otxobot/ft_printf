/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:38:36 by abasante          #+#    #+#             */
/*   Updated: 2022/12/01 12:13:16 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_formats(int c, va_list ap)
{
	int	i;

	i = 0;
	if (c == 'c')
		i = i + ft_char_format(va_arg(ap, int));
	else if (c == 's')
		i = i + ft_string_format(va_arg(ap, char *));
	else if (c == 'p')
		i += ft_string_format("0x") + \
		ft_hexadecimal2(va_arg(ap, unsigned long int), c);
	else if (c == 'i' || c == 'd')
		i = i + ft_putnbr_fd(va_arg(ap, int));
	else if (c == 'u')
		i = i + ft_putunbr_fd(va_arg(ap, unsigned int));
	else if (c == 'x')
		i = ft_hexadecimal(va_arg(ap, unsigned int), c);
	else if (c == 'X')
		i = ft_hexadecimal(va_arg(ap, unsigned int), c);
	else if (c == '%')
		i = i + ft_putchar_fd('%');
	return (i);
}
