/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 11:01:21 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/06/28 11:50:53 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexlen(unsigned long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (0);
	while (n)
	{
		n /= 16;
		len++;
	}
	return (len);
}
