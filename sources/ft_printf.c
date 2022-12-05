/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:24:58 by abasante          #+#    #+#             */
/*   Updated: 2022/12/01 12:29:06 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_input_parser(const char *str, va_list ap)
{
	int	pos;
	int	i;

	pos = 0;
	i = 0;
	while (str[pos])
	{
		if (str[pos] != '%')
			i += ft_putchar_fd(str[pos]);
		else if ((str[pos] == '%') && str[pos + 1])
		{
			pos++;
			if (ft_is_argument(str[pos]))
				i += ft_formats(str[pos], ap);
			else if (str[pos])
				i += ft_putchar_fd(str[pos]);
		}
		pos++;
	}
	return (i);
}

int	ft_printf(const char *fmt, ...)
{
	va_list		ap;
	const char	*str;
	int			i;

	i = 0;
	str = ft_strdup(fmt);
	if (!str)
		return (0);
	va_start(ap, fmt);
	i += ft_input_parser(str, ap);
	va_end(ap);
	free((void *)str);
	return (i);
}
