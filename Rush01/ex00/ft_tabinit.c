/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabinit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: PAX <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:02:59 by PAX               #+#    #+#             */
/*   Updated: 2022/08/28 15:27:38 by parinder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my.h"

int	ft_tab_init(char **tab_final, char *tab, int size)
{
	int	x;
	int	y;
	int	i;

	x = 0;
	i = 0;
	while (x < size)
	{
		y = 0;
		while (y < size && tab[i])
		{
			if (tab[i] > 48 && tab[i] <= size + 48)
				tab_final[x][y++] = tab[i];
			else if (tab[i] != 32)
				return (0);
			i++;
		}
		x++;
	}
	return (1);
}
