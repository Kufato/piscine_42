/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:25:52 by axcallet          #+#    #+#             */
/*   Updated: 2022/08/21 13:16:00 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{	
	int	i;
	int	j;

	i = 1;
	while (i < size)
	{
		if (tab[i] < tab[i - 1])
		{
			j = tab[i];
			tab[i] = tab[i - 1];
			tab[i - 1] = j;
			i = 0;
		}
		++i;
	}
	printf("%d%d%d%d", tab[0], tab[1], tab[2], tab[3]);
}

int	main(void)
{
	int	str[4] = {5, 8, 9, 6};
	ft_sort_int_tab(str, 4);
}
