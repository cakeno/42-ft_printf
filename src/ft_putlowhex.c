/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlowhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnoba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:57:06 by cnoba             #+#    #+#             */
/*   Updated: 2024/12/11 15:16:52 by cnoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putlowhex(uintptr_t n)
{
	int		count;

	count = 0;
	if (n >= 16)
		count += ft_putlowhex(n / 16);
	count += ft_putchar("0123456789abcdef"[n % 16]);
	return (count);
}
