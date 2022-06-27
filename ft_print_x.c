/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:19:10 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/06/27 18:06:58 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_x(unsigned int p)
{
	char	*str;
	int	len;

	str = NULL;
	str = ft_dec_to_hex_x(p, str, 'x');
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
