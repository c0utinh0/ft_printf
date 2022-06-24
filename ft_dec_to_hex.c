/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec_to_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:00:50 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/06/23 15:20:01 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_calc_r(int rest, char op, char *s, int i)
{
	char	c;

	if (rest <= 9)
	{
		c = rest + '0'; 
		s[i--] = c;
	}
	else
	{
		c = ((rest/ 10) + (rest % 10) - 1) + op;
		s[i--] = c;
	}
	return (i);
}

int	ft_calc_n(int n, char op, char *s, int i)
{
	char c;

	if (n <= 9)
	{
		c = n + '0';
	s[i--] = c;
	}
	else 
	{	
		c = ((n/ 10) + (n % 10) - 1) + op;
	s[i--] = c;
	}
	return (i);
}

char	*ft_dec_to_hex(unsigned long n, char *s, char op)
{
	int		div;
	int		rest;
	int i;

	i = ft_hexlen(n) + 1;
	s = (char *) calloc(i, sizeof(char));
	if (!s)
		return (0);
	div = 16;
	while (n > div)
	{
		rest = (n % div);
		n = n / div;
		i = ft_calc_r(rest, op, s, i);
	}
	ft_calc_n(n, op, s, i);
	return (s);
}
