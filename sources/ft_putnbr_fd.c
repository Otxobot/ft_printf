/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:38:23 by abasante          #+#    #+#             */
/*   Updated: 2022/12/01 12:27:47 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr_fd(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		i += ft_putchar_fd('-');
		n = -n;
	}
	if (n > 9)
	{
		i += ft_putnbr_fd(n / 10);
		i += ft_putnbr_fd(n % 10);
	}
	else
		i += ft_putchar_fd(n + 48);
	return (i);
}
