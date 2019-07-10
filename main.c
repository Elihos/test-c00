/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahenry <ahenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 02:29:22 by ahenry            #+#    #+#             */
/*   Updated: 2019/07/10 11:24:14 by ahenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);
void	ft_print_alphabet(void);
void	ft_print_reverse_alphabet(void);
void	ft_print_numbers(void);
void	ft_is_negative(int n);
void	ft_print_comb(void);
void	ft_print_comb2(void);
void	ft_putnbr(int nb);
void	ft_print_combn(int n);

int		main(void)
{
	printf("ex00 : ");
	ft_putchar('O');
	printf("\nex01 : ");
	ft_print_alphabet();
	printf("\nex02 : ");
	ft_print_reverse_alphabet();
	printf("\nex03 : ");
	ft_print_numbers();
	printf("\nex04 : 1 => %c, 0 => %c, -1 => %c\n", ft_is_negative(1), ft_is_negative(0), ft_is_negative(-1));
	printf("\nex05 : ");
	ft_print_comb();
	printf("\nex06 : ");
	ft_print_comb2();
	printf("\nex07 : 42 => ");
	ft_putnbr(42);
	printf(", -2147483648 => ");
	ft_putnbr(-2147483648);
	printf("\nex08 : param = 2\n");
	ft_print_combn(2);
	printf("\nparam = 5\n");
	ft_print_combn(5);
	return (0);
}
