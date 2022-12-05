/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:06:00 by abasante          #+#    #+#             */
/*   Updated: 2022/12/01 12:07:06 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "../libft/libft.h"

# define DECIMAL_BASE "0123456789"
# define HEXADECIMAL_U_BASE "0123456789ABCDEF"
# define HEXADECIMAL_L_BASE "0123456789abcdef"

int	ft_printf(const char *format, ...);
int	ft_formats(int c, va_list ap);
int	ft_char_format(char c);
int	ft_is_argument(int c);
int	ft_string_format(char *str);
int	ft_putnbr_fd(int n);
int	ft_putunbr_fd(unsigned int nbr);
int	ft_hexadecimal(unsigned int adr, char c);
int	ft_hexadecimal2(unsigned long int adr, char c);

#endif
