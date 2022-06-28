/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:25:30 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/06/28 13:31:15 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdarg.h>
# include<unistd.h>
# include<stdlib.h>

int		ft_printf(const char *s, ...);
int		ft_choise_param(char c, va_list params);
int		ft_print_char(int c);
int		ft_print_str(char *s);
size_t	ft_pf_strlen(const char *s);
int		ft_print_p(unsigned long p);
int		ft_hexlen(unsigned long n);
char	*ft_dec_to_hex_p(unsigned long n, char *s, char op);
char	*ft_dec_to_hex_x(unsigned int n, char *s, char op);
int		ft_print_d(int n);
void	*ft_pf_memcpy(void *dst, const void *src, size_t n);
char	*ft_pf_itoa_i(char *str, int n);
char	*ft_pf_itoa_u(char *str, unsigned int n);
int		ft_print_u(unsigned int n);
int		ft_print_x(unsigned int n);
int		ft_print_xx(unsigned int n);
int		ft_print_percent(int c);
#endif
