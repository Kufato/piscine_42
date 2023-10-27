/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_call_finsh.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdhaussy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:37:18 by tdhaussy          #+#    #+#             */
/*   Updated: 2022/08/28 19:45:02 by tdhaussy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my.h"

int	check_up_down(char **tab, int **int_tab, int size, int j)
{
	int	x;
	int	stock;
	int	count;

	x = 0;
	stock = 0;
	count = 0;
	while (x < size)
	{
		if (stock < int_tab[x][j])
		{
			stock = int_tab[x][j];
			count++;
		}
		x++;
	}
	if (count != tab[0][j] + 48)
		return (0);
	return (1);
}

int	check_down_up(char **tab, int **int_tab, int size, int j)
{
	int	x;
	int	stock;
	int	count;

	x = 0;
	stock = 0;
	count = 0;
	while (x < size)
	{	
		if (stock < int_tab[x][j])
		{
			stock = int_tab[x][j];
			count++;
		}
		x++;
	}
	if (count != tab[size - 1][j] + 48)
		return (0);
	return (1);
}

int	call_up_down(char **tab, int **int_tab, int size)
{
	int	y;

	y = 0;
	while (y < size)
	{
		if (check_up_down(tab, int_tab, size, y) == 0)
			return (0);
		y++;
	}
	y -= 1;
	while (y >= 0)
	{
		if (check_down_up(tab, int_tab, size, y) == 0)
			return (0);
		y--;
	}
	return (1);
}
