/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahenry <ahenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 02:29:22 by ahenry            #+#    #+#             */
/*   Updated: 2019/07/11 02:30:12 by ahenry           ###   ########.fr       */
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

int		main(int argc, char **argv)
{
	int exo;

	if (argc >= 2)
		exo = atoi(argv[1]);
	else
		exo = -1;
	if (exo >= 0)
	{
		printf("ex00 : ");
		ft_putchar('O');
	}
	if (exo >= 1)
	{
		printf("\nex01 : ");
		ft_print_alphabet();
	}
	if (exo >= 2)
	{
		printf("\nex02 : ");
		ft_print_reverse_alphabet();
	}
	if (exo >= 3)
	{
		printf("\nex03 : ");
		ft_print_numbers();
	}
	if (exo >= 4)
		printf("\nex04 : 1 => %c, 0 => %c, -1 => %c\n", ft_is_negative(1), ft_is_negative(0), ft_is_negative(-1));
	if (exo >= 5)
	{
		printf("\nex05 : ");
		ft_print_comb();
	}
	if (exo >= 6)
	{
		printf("\nex06 : ");
		ft_print_comb2();
	}
	if (exo >= 7)
	{
		printf("\nex07 : 42 => ");
		ft_putnbr(42);
		printf(", -2147483648 => ");
		ft_putnbr(-2147483648);
	}
	if (exo >= 8)
	{
		printf("\nex08 : param = 2\n");
		ft_print_combn(2);
		printf("\nparam = 5\n");
		ft_print_combn(5);
	}
	return (0);
}
