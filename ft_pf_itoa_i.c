/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_itoa_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:44:55 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/06/28 11:53:31 by dcoutinh         ###   ########.fr       */
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

static char	*ft_strdup(const char *s)
{
	char	*dst;
	int		n;

	n = ft_pf_strlen((char *)s) + 1;
	dst = malloc(sizeof(char) * (n));
	if (!dst)
		return (NULL);
	ft_pf_memcpy(dst, s, n);
	return (dst);
}

static int	ft_count_n(int n)
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

char	*ft_pf_itoa_i(char *str, int n)
{
	int	i;
	int	n_temp;

	n_temp = n;
	i = ft_count_n(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n = n * (-1);
		str = ft_calloc(++i + 1, 1);
	}
	else
		str = ft_calloc(i + 1, 1);
	if (!str)
		return (NULL);
	while (i > 0)
	{
		str[--i] = (n % 10) + '0';
		n = n / 10;
	}
	if (n_temp < 0)
		str[0] = '-';
	return (str);
}
