/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:34:56 by axcallet          #+#    #+#             */
/*   Updated: 2022/08/17 18:24:59 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	ft_putchar(nb / 10 + 48);
	ft_putchar(nb % 10 + 48);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			ft_putnbr(a);
			ft_putchar(' ');
			ft_putnbr(b);
			if (a != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		++a;
		b = a + 1;
	}
}
