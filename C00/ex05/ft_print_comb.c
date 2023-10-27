/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 09:48:20 by axcallet          #+#    #+#             */
/*   Updated: 2022/08/17 13:33:09 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a + b + c != 168)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				print(a, b, c);
				c++;
			}
			++b;
			c = b + 1;
		}
		++a;
		b = a;
	}
}
