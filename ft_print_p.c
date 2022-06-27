/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:20:22 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/06/27 14:38:44 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(unsigned long p)
{
	char	*str;
	int	len;

	str = NULL;
	str = ft_dec_to_hex(p, str, 'a');
	if (*str == '(')
	{
		len = ft_print_str(str);
	}
	else
	{
		str[0] = '0';
		str[1] = 'x';
		len = ft_print_str(str);
		free(str);
	}
	return (len);
}
