/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnoba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:33:01 by cnoba             #+#    #+#             */
/*   Updated: 2024/12/04 15:33:04 by cnoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_process_format(const char *format, int i, va_list ap);

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		chars_printed;

	i = 0;
	chars_printed = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%' && ft_strchr("cspdiuxX%", format[i + 1]))
		{
			chars_printed += ft_process_format(format, i, ap);
			i++;
		}
		else
			chars_printed += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (chars_printed);
}

int	ft_process_format(const char *format, int i, va_list ap)
{
	if (format[i + 1] == '%')
		return (ft_putchar(format[i + 1]));
	else if (format[i + 1] == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (format[i + 1] == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	else if (format[i + 1] == 'u')
		return (ft_putnbr_u(va_arg(ap, unsigned int)));
	else if (format[i + 1] == 'x')
		return (ft_putlowhex(va_arg(ap, unsigned int)));
	else if (format[i + 1] == 'X')
		return (ft_putupperhex(va_arg(ap, unsigned int)));
	else if (format[i + 1] == 'p')
		return (ft_putptr(va_arg(ap, void *)));
	else
		return (0);
}
