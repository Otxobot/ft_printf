/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:27:55 by abasante          #+#    #+#             */
/*   Updated: 2022/12/01 12:27:58 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putunbr_fd(unsigned int nbr)
{
	int	i;

	i = 0;
	if (nbr > 9)
		i += ft_putunbr_fd(nbr / 10);
	i += ft_putchar_fd((nbr % 10) + 48);
	return (i);
}
