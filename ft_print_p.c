/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:20:22 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/06/23 15:23:00 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(unsigned long p)
{
	char	*str;
	int	len;

	str = ft_dec_to_hex(p, str, 'a');
	str[0] = '0';
	str[1] = 'x';
	len = ft_print_str(str);
	free(str);
	return (len);
}
