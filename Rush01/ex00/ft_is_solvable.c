/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_solvable.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdhaussy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 10:59:48 by tdhaussy          #+#    #+#             */
/*   Updated: 2022/08/28 11:49:15 by tdhaussy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my.h"

int	ft_case14(char **tab, int x, int y, int size)
{
	int	i;

	i = y + 1;
	while (i < size / 4)
	{
		if (tab[x][i] == '1' && tab[x][y] == '1')
			return (0);
		if (tab[x][i] == '4' && tab[x][y] == '4')
			return (0);
		i++;
	}
	return (1);
}

int	ft_case23(char **tab, int x, int y, int size)
{
	int	i;
	int	count2;
	int	count3;

	i = y + 1;
	count2 = 0;
	count3 = 0;
	while (i < size)
	{
		if (tab[x][i] == '2' && tab[x][y] == '2')
			count2++;
		if (tab[x][i] == '3' && tab[x][y] == '3')
			count3++;
		if (count2 > 2 || count3 > 1)
			return (0);
		i++;
	}	
	return (1);
}

int	ft_face(char **tab, int y)
{
	if ((tab[0][y] == '4' && tab[1][y] != '1') ||
		(tab[1][y] == '4' && tab[0][y] != '1') ||
		(tab[2][y] == '4' && tab[3][y] != '1') ||
		(tab[3][y] == '4' && tab[2][y] != '1'))
		return (0);
	if ((tab[0][y] == '1' && tab[1][y] == '1') ||
		(tab[2][y] == '1' && tab[3][y] == '1'))
		return (0);
	if ((tab[0][y] == '3' && tab[1][y] == '3') ||
		(tab[2][y] == '3' && tab[3][y] == '3'))
		return (0);
	return (1);
}

int	ft_corner(char **tab)
{
	if ((tab[0][0] == '1' && tab[2][0] != '1') ||
		(tab[0][3] == '1' && tab[3][0] != '1') ||
		(tab[3][3] == '1' && tab[1][3] != '1') ||
		(tab[2][3] == '1' && tab[1][0] != '1'))
		return (0);
	else if ((tab[2][0] == '1' && tab[0][0] != '1') ||
		(tab[3][0] == '1' && tab[0][3] != '1') ||
		(tab[1][3] == '1' && tab[3][3] != '1') ||
		(tab[1][0] == '1' && tab[2][3] != '1'))
		return (0);
	else
		return (1);
}

int	ft_is_solvable(char **tab, int size)
{
	int	x;
	int	y;

	x = 0;
	while (x < size / 4)
	{
		y = 0;
		while (y < size / 4)
		{
			if (tab[x][y] == '1' || tab[x][y] == '4')
				if (ft_case14(tab, x, y, size) == 0)
					return (0);
			if (tab[x][y] == '3' || tab[x][y] == '2')
				if (ft_case23(tab, x, y, size) == 0)
					return (0);
			if (ft_face(tab, y) == 0)
				return (0);
			y++;
		}
		x++;
	}
	if (ft_corner(tab) == 0)
		return (0);
	return (1);
}
