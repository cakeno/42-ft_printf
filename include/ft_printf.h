/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnoba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:08:16 by cnoba             #+#    #+#             */
/*   Updated: 2024/12/04 17:27:44 by cnoba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <limits.h>
# include "../libft/libft.h"

int	ft_printf(const char *fmt, ...);
int	ft_putupperhex(uintptr_t n);
int	ft_putlowhex(uintptr_t n);
int	ft_putnbr_u(unsigned int n);
int	ft_putptr(void *ptr);
#endif
