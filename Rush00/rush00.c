/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: los_buenos <marvin@42.fr>                 +#+  +:+       +#+         */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 12:13:23 by los_buenos        #+#    #+#             */
/*   Updated: 2022/08/21 10:22:09 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_error(int x, int y)
{
	if (x == 0 && y == 0)
		write(1, "Error: its Toto's face", 22);
	else if (x == 0 || y == 0)
		write(1, "Error: zero number", 18);
	else if (x < 0 || y < 0)
		write(1, "Error: negative number", 22);
}

void	ft_placement(int x, int y, int i, int j)
{
	if (j == 0 || j == (y - 1))
	{
		if (i == 0 || i == (x - 1))
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	else
	{
		if (i == 0 || i == (x - 1))
			ft_putchar('|');
		else
			ft_putchar(' ');
	}
}

void	rush00(int x, int y)
{	
	int	i;
	int	j;

	i = 0;
	j = 0;
	ft_error(x, y);
	while (j <= (y - 1) && i <= x && y > 0 && x > 0)
	{
		if (i == x)
		{
			ft_putchar('\n');
			j++;
			i = 0;
		}
		else
		{
			ft_placement(x, y, i, j);
			i++;
		}
	}
}
