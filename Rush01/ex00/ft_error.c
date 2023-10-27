/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: PAX <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 18:41:33 by PAX               #+#    #+#             */
/*   Updated: 2022/08/27 21:02:20 by parinder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my.h"

int	ft_error(char **tab, int size)
{
	int	j;
	int	i;

	if (size % 4 != 0 || size / 4 > 9)
		return (0);
	j = 0;
	while (tab[j][i])
	{
		i = 0;
		while (tab[j][i])
		{
			if (tab[j][i] < 49 || tab[j][i] > (size / 4 + 48))
				return (0);
			i++;
		}
		j++;
	}
	return (1);
}