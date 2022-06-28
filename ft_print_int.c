/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:05:26 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/06/28 11:58:31 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_d(int n)
{
	char	*s;

	s = NULL;
	s = ft_pf_itoa_i(s, n);
	n = ft_print_str(s);
	free(s);
	return (n);
}
