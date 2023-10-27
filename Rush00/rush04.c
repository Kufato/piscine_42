/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: los_buenos <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 10:25:35 by los_buenos        #+#    #+#             */
/*   Updated: 2022/08/21 15:51:39 by axcallet         ###   ########.fr       */
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

void	ft_placement(int x, int y, int line, int column)
{
	if (column == 0)
	{
		if (line == 0)
			ft_putchar('A');
		else if (line == (x - 1))
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else if (column == (y - 1))
	{
		if (line == 0)
			ft_putchar('C');
		else if (line == (x - 1))
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else
	{
		if (line == 0 || line == (x - 1))
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush04(int x, int y)
{
	int	line;
	int	column;

	line = 0;
	column = 0;
	ft_error(x, y);
	while (column <= (y - 1) && line <= x && x > 0 && y > 0)
	{
		if (line == x)
		{
			ft_putchar('\n');
			column++;
			line = 0;
		}
		else
		{
			ft_placement(x, y, line, column);
			line++;
		}
	}
}
