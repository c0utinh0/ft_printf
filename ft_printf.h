/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:25:30 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/06/22 16:25:24 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdarg.h>
# include<unistd.h>

int		ft_printf(const char *s, ...);
int		ft_choise_param(char c, va_list params);
int		ft_print_char(int c);
int		ft_print_str(char *s);
size_t	ft_pf_strlen(const char *s);
int		ft_print_p(unsigned int p);

#endif
