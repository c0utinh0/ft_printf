/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:21:42 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/06/20 16:03:04 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	params;
	int	len;

	va_start(params, s);
	while(*s)
	{
		if (*s == '%')
		{
			s++;
			ft_choise_param(*s, params);
			s++;
		}
		write(1, s, 1);
		len++;
		s++;
	}
	va_end(params);
	return (len);
}

