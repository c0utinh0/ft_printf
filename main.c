#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
//	char c = '0';
//	int len_o_char = printf("Or# Char: %c\n", '0' - 256);
//	int len_ft_char = ft_printf("FT# Char: %c\n", '0' - 256);
//	printf("Original: %d, FT: %d\n\n", len_o_char, len_ft_char); 

//	char *s1 = "pingas";
//	char *s2 = "pingas";
//	int len_o_str = printf(" %p %p ", 0, 0);
//	printf("\nOr: %d\n", len_o_str);
//	int len_ft_str = ft_printf(" %p %p ", 0, 0);
//	printf("\nFT: %d\n\n", len_ft_str);

//	char *p1;
//	char *p2;
//	int len_o_p = printf("Or# %p\n", &p1);
//	int len_ft_p = ft_printf("FT# %p\n",&p2);
//	printf("Original: %d, FT: %d\n\n", len_o_p, len_ft_p); 
	
//	int len_o_d = printf("Or# %d\n", 1750);
//	int len_ft_d = ft_printf("FT# %d\n", 1750);
//	printf("Original: %d, FT: %d\n\n", len_o_d, len_ft_d); 

	int len_o_u = printf("%u\n", -1750);
	printf("Original: %d\n", len_o_u); 
	int len_ft_u = ft_printf("%u\n", -1750);
	printf("FT: %d\n", len_ft_u); 




	return (0);
}
