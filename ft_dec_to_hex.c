/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec_to_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:00:50 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/06/22 19:18:25 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_dec_to_hex(int n)
{
	int div;
	int rest;
	char c;

	div = 16;
	while (n > div)
	{
		  rest = (n % div);
		  n = n / div;
		  if (rest <= 9)
		  {
			  c = rest + '0'; 
			  write(1, &c, 1);
		  }
	}
	c = n + '0';
	write(1, &c, 1);

	return (1);
}

