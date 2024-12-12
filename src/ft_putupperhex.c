/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putupperhex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnoba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:57:06 by cnoba             #+#    #+#             */
/*   Updated: 2024/12/11 15:17:02 by cnoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putupperhex(uintptr_t n)
{
	int		count;

	count = 0;
	if (n >= 16)
		count += ft_putupperhex(n / 16);
	count += ft_putchar("0123456789ABCDEF"[n % 16]);
	return (count);
}
