/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnoba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:57:33 by cnoba             #+#    #+#             */
/*   Updated: 2024/12/11 12:25:00 by cnoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putptr(void *ptr)
{
	int	count;

	if (ptr == 0)
		return (ft_putstr("(nil)"));
	count = ft_putstr("0x");
	return (count + ft_putlowhex((uintptr_t)ptr));
}
