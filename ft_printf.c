/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:21:42 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/06/22 15:58:07 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	params;
	int		len;

	len = 0;
	va_start(params, s);
	while (*s)
	{
		if (*s == '%')
		{
			len += ft_choise_param(*++s, params);
			s++;
		}
		if (*s != '%')
		{
			write(1, s++, 1);
			len++;
		}
	}
	va_end(params);
	return (len);
}
