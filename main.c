#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
//	char c = 'c';
//	int len_o_char = printf("Or# Char: %c\n", c);
//	int len_ft_char = ft_printf("FT# Char: %c\n", c);
//	printf("Original: %d, FT:  %d\n\n", len_o_char, len_ft_char); 

//	char *s1 = "pingas";
//	char *s2 = "pingas";
//	int len_o_str = printf("Or# %s%s\n", s1, "pingas");
//	int len_ft_str = ft_printf("FT# %s%s\n", s2, "pingas");
//	printf("Original: %d, FT:  %d\n\n", len_o_str, len_ft_str); 

//	char *p1;
//	char *p2;
//	int len_o_p = printf("Or# %p\n", &p1);
//	int len_ft_p = ft_printf("FT# %p\n",&p2);
//	printf("Original: %d, FT: %d\n\n", len_o_p, len_ft_p); 
	
	int len_o_d = printf("Or# %d\n", 42);
	int len_ft_d = ft_printf("FT# %d\n",42);
	printf("Original: %d, FT: %d\n\n", len_o_d, len_ft_d); 
	
	return (0);
}
