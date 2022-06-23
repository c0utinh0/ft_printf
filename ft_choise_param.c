/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_choise_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:12:33 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/06/23 14:57:44 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_choise_param(char c, va_list params)
{
	int	len;

	len = 0;
	if (c == 'c')
		len = ft_print_char(va_arg(params, int));
	if (c == 's')
		len = ft_print_str(va_arg(params, char *));
	if (c == 'p')
		len = ft_print_p(va_arg(params, unsigned long));
	return (len);
}
