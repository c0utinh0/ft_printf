/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_xx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:20:58 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/06/28 14:35:51 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_xx(unsigned int p)
{
	char	*str;
	int		len;

	str = NULL;
	str = ft_dec_to_hex_x(p, str, 'X');
	if (*str == '0')
	{
		len = ft_print_str(str);
	}
	else
	{
		len = ft_print_str(str);
		free(str);
	}
	return (len);
}
