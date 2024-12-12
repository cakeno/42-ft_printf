/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnoba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 00:11:31 by cnoba             #+#    #+#             */
/*   Updated: 2024/12/11 12:27:18 by cnoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n)
{
	int				count;
	unsigned int	num;

	count = 0;
	if (n < 0)
	{
		count += ft_putchar('-');
		num = (unsigned int)-n;
	}
	else
		num = (unsigned int)n;
	if (num >= 10)
		count += ft_putnbr(num / 10);
	count += ft_putchar('0' + (num % 10));
	return (count);
}
