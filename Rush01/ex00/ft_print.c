/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: PAX <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 21:05:45 by PAX               #+#    #+#             */
/*   Updated: 2022/08/28 17:13:03 by parinder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my.h"

void	ft_print(int **tab, int size)
{
	int	x;
	int	y;

	x = 0;
	while (x < size)
	{
		y = 0;
		while (y < size)
		{
			if (tab[x][y] > 9)
				tab[x][y] /= 10;
			ft_putchar(tab[x][y] + 48);
			if (y < size - 1)
				ft_putchar(' ');
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}
