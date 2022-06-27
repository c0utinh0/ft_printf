# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/25 11:17:28 by dcoutinh          #+#    #+#              #
#    Updated: 2022/06/27 16:41:21 by dcoutinh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

SRCS =  ft_choise_param.c	\
		ft_dec_to_hex.c	\
		ft_hexlen.c	\
		ft_pf_itoa_i.c	\
		ft_pf_itoa_u.c	\
		ft_pf_memcpy.c	\
		ft_pf_strlen.c		\
		ft_print_char.c		\
		ft_print_int.c		\
		ft_print_p.c		\
		ft_print_str.c	\
		ft_printf.c	\
		ft_print_u.c	\

OBJS = $(SRCS:.c=.o)

all: $(NAME) 

$(NAME): $(OBJS) 
	ar -rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) -I . -c $(CFLAGS) $(SRCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
