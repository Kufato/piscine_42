/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: PAX <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 18:41:33 by PAX               #+#    #+#             */
/*   Updated: 2022/08/28 16:46:07 by parinder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my.h"
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((str[i] > 48 && str[i] < 58)
			&& (str[i + 1] == 32 || str[i + 1] == 0))
			count++;
		i++;
	}
	if (i != 31)
		return (1);
	return (count);
}

int	main(int argc, char **argv)
{
	char	**tab;
	int		size;
	int		i;

	size = 0;
	i = 0;
	if (argc == 2)
	{
		size = ft_strlen(argv[1]);
		tab = malloc(sizeof(char *) * 4);
		while (i < 4)
			tab[i++] = malloc(sizeof(char) * (size / 4));
		if (ft_tab_init(tab, argv[1], size / 4) == 1
			&& ft_error(tab, size) == 1 && ft_is_solvable(tab, size) == 1)
		{
			algo(tab, size / 4);
			ft_destroy_char(tab);
		}
		else
			write(1, "Error\n", 6);
	}
	return (0);
}
