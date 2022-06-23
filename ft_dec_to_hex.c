/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec_to_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:00:50 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/06/23 11:52:56 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_hexlen(unsigned long n);

int	ft_print_r(int rest, char op, char *s, int i)
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

int	ft_print_n(int n, char op, char *s, int i)
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

int	ft_dec_to_hex(unsigned long n, char op)
{
	int		div;
	int		rest;
	char *s;
	int i;

	i = ft_hexlen(n);
	s = malloc(i * sizeof(char));
	if (!s)
		return (0);
	div = 16;
	i = 0;
	while (n > div)
	{
		rest = (n % div);
		n = n / div;
		ft_print_r(rest, op, s, i);
	}
	ft_print_n(n, op, s, i);
		return (1);
}
