/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:49:53 by axcallet          #+#    #+#             */
/*   Updated: 2022/09/05 17:13:02 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	stock;

	i = 0;
	stock = min;
	if (min >= max)
		return ((int) 0);
	*range = malloc(sizeof(int) * (max - min));
	if (range == 0)
		return (-1);
	else
	{
		while (min < max)
		{
			range[0][i] = min;
			i++;
			min++;
		}
	}
	return (max - stock);
}
