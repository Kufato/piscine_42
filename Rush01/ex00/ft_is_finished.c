/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_finished.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdhaussy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:07:40 by tdhaussy          #+#    #+#             */
/*   Updated: 2022/08/28 19:10:08 by parinder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my.h"

int	check_left_right(char **tab, int **int_tab, int size, int j)
{
	int	y;
	int	stock;
	int	count;

	y = 0;
	stock = 0;
	count = 0;
	while (y < size)
	{
		if (stock < int_tab[j][y])
		{
			stock = int_tab[j][y];
			count++;
		}
		y++;
	}
	if (count != tab[j][0] + 48)
		return (0);
	return (1);
}

int	check_right_left(char **tab, int **int_tab, int size, int j)
{
	int	y;
	int	stock;
	int	count;

	y = 0;
	stock = 0;
	count = 0;
	while (y < size)
	{	
		if (stock < int_tab[j][y])
		{
			stock = int_tab[j][y];
			count++;
		}
		y++;
	}
	if (count != tab[j][size - 1] + 48)
		return (0);
	return (1);
}

int	ft_is_finished(char **tab, int **int_tab, int size)
{
	int	x;

	x = 0;
	if (call_up_down(tab, int_tab, size) == 0)
		return (0);
	while (x < size)
	{
		if (check_left_right(tab, int_tab, size, x) == 0)
			return (0);
		x++;
	}
	x -= 1;
	while (x >= 0)
	{
		if (check_right_left(tab, int_tab, size, x) == 0)
			return (0);
		x--;
	}
	return (1);
}
