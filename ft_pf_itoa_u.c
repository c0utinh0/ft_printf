/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_itoa_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:09:34 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/06/27 16:45:16 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

static void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count == 0 || size == 0)
	{
		size = 1;
		count = size;
	}
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	if (ptr)
		ft_bzero(ptr, count * size);
	return (ptr);
}

static int	ft_count_n(unsigned int n)
{
	int	t;
		
	t = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n = n / 10;
		t++;
	}
	return (t);
}

char	*ft_pf_itoa_u(char *str, unsigned int n)
{
	int		i;
	
	i = 0;
	i = ft_count_n(n);
	str = ft_calloc(i + 1, 1);
	if (!str)
		return (NULL);
	while (i > 0)
	{
		str[--i] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
