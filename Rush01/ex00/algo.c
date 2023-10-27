/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: PAX <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:50:58 by PAX               #+#    #+#             */
/*   Updated: 2022/08/28 20:42:36 by parinder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my.h"
#include <stdlib.h>

void	ft_left_right(char **tab, int **int_tab, int x)
{
	if (tab[2][x] == '4')
	{
		int_tab[x][0] = 1;
		int_tab[x][1] = 2;
		int_tab[x][2] = 3;
		int_tab[x][3] = 4;
	}
	if (tab[3][x] == '4')
	{
		int_tab[x][3] = 1;
		int_tab[x][2] = 2;
		int_tab[x][1] = 3;
		int_tab[x][0] = 4;
	}
	if (tab[2][x] == '1')
		int_tab[x][0] = 4;
	if (tab[3][x] == '1')
		int_tab[x][3] = 4;
	if (tab[2][x] == '2' && tab[3][x] == '3')
		int_tab[x][1] = 4;
	if (tab[2][x] == '3' && tab[3][x] == '2')
		int_tab[x][2] = 4;
	if (tab[2][x] == '1' && tab[3][x] == '2')
		int_tab[x][3] = 3;
}

void	ft_up_down(char **tab, int **int_tab, int y)
{
	if (tab[0][y] == '4')
	{
		int_tab[0][y] = 1;
		int_tab[1][y] = 2;
		int_tab[2][y] = 3;
		int_tab[3][y] = 4;
	}
	if (tab[1][y] == '4')
	{
		int_tab[3][y] = 1;
		int_tab[2][y] = 2;
		int_tab[1][y] = 3;
		int_tab[0][y] = 4;
	}
	if (tab[0][y] == '1')
		int_tab[0][y] = 4;
	if (tab[1][y] == '1')
		int_tab[3][y] = 4;
	if (tab[0][y] == '2' && tab[1][y] == '3')
		int_tab[1][y] = 4;
	if (tab[0][y] == '3' && tab[1][y] == '2')
		int_tab[2][y] = 4;
	if (tab[0][y] == '1' && tab[1][y] == '2')
		int_tab[3][y] = 3;
}

void	ft_backtracker(int **tab, int x, int y)
{
	int	i;

	i = 1;
	if (x == 3 && y == 3)
		return ;
	while (i < 4)
	{
		if (tab[x][y] == 0 || tab[x][y] > 9)
			tab[x][y] = i * 10;
		if (ft_check(tab, x, y, tab[x][y]))
		{
			if (y == 4)
				ft_backtracker(tab, x + 1, 0);
			else
				ft_backtracker(tab, x, y + 1);
		}
		i++;
	}
}

int	ft_check(int **tab, int x, int y, int value)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if ((tab[i][y] == value) || (tab[i][y] == value * 10 && i != x))
			return (0);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if ((tab[x][i] == value) || (tab[x][i] == value * 10 && i != y))
			return (0);
		i++;
	}
	return (1);
}

void	algo(char **tab, int size)
{
	int	**int_tab;
	int	i;

	i = 0;
	int_tab = malloc(sizeof(int *) * size);
	while (i < size)
		int_tab[i++] = malloc(sizeof(int) * size);
	i = 0;
	while (tab[0][i] && tab[1][i] && i < size)
		ft_up_down(tab, int_tab, i++);
	i = 0;
	while (tab[2][i] && tab[3][i] && i < size)
		ft_left_right(tab, int_tab, i++);
//	while (ft_is_finished(tab, int_tab, size) == 0)
		ft_backtracker(int_tab, 0, 0);
	ft_print(int_tab, size);
	ft_destroy_int(int_tab);
}
