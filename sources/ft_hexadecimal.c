/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:01:38 by abasante          #+#    #+#             */
/*   Updated: 2022/12/01 12:14:25 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_hexadecimal(unsigned int adr, char c)
{
	char	*a;
	char	*b;
	int		i;

	a = "0123456789abcdef";
	b = "0123456789ABCDEF";
	i = 0;
	if (c == 'x' || c == 'p')
	{
		if (adr >= 16)
			i += ft_hexadecimal(adr / 16, c);
		i += ft_putchar_fd(a[adr % 16]);
		return (i);
	}
	else if (c == 'X')
	{
		if (adr >= 16)
			i += ft_hexadecimal(adr / 16, c);
		i += ft_putchar_fd (b[adr % 16]);
	}
	return (i);
}
