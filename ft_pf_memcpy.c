/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_memcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:55:42 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/06/24 18:56:42 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_pf_memcpy(void *dst, const void *src, size_t n)
{
	char	*m_dst;

	m_dst = (char *)dst;
	if (dst == NULL && src == NULL && n)
		return (dst);
	while (n-- > 0)
		*m_dst++ = *(char *)src++;
	return (dst);
}
